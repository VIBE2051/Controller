import rclpy
import math
import threading
from rclpy.node import Node
from inputs import get_gamepad
from controller_interface.msg import Control

class XboxController(object):
    MAX_TRIG_VAL = math.pow(2, 8)
    MAX_JOY_VAL = math.pow(2, 15)

    def __init__(self):
        
        self.LeftJoystickY = 0
        self.LeftJoystickX = 0
        self.RightJoyStickY = 0
        self.RightJoyStickX = 0
        self.LeftTrigger = 0
        self.RightTrigger = 0
        self.LeftBumper = 0
        self.RightBumper = 0
        self.A = 0
        self.X = 0
        self.Y = 0
        self.B = 0
        self.LeftThumb = 0
        self.RightThumb = 0
        self.Back = 0
        self.Start = 0
        self.LeftDpad = 0
        self.RightDpad = 0
        self.UpDpad = 0
        self.DownDpad = 0

        self._monitor_thread = threading.Thread(target=self._monitor_controller, args=())
        self._monitor_thread.daemon = True
        self._monitor_thread.start()

    def read(self):
        joyX = self.LeftJoystickX
        joyY = self.LeftJoystickY
        button_a = self.A
        button_b = self.B
        RightBumper = self.RightBumper
        Controller_Input = [joyX, joyY, button_a, button_b, RightBumper]

        return Controller_Input
    
    def _monitor_controller(self):
        events = get_gamepad()
        for event in events:
            if event.code == 'ABS_Y':
                self.LeftJoystickY = event.state / XboxController.MAX_JOY_VAL #Keeps Values between -1 and 1
            elif event.code == 'ABS_X':
                self.LeftJoystickX = event.state / XboxController.MAX_JOY_VAL
            elif event.code == 'ABS_RY':
                self.RightJoyStickY = event.state / XboxController.MAX_JOY_VAL
            elif event.code == 'ABS_RX':
                self.RightJoyStickX = event.state / XboxController.MAX_JOY_VAL
            elif event.code == 'ABS_Z':
                self.LeftTrigger == event.state / XboxController.MAX_TRIG_VAL #Keeps between 0 and 1
            elif event.code == 'ABS_RZ':
                self.RightTrigger = event.state / XboxController.MAX_TRIG_VAL
            elif event.code == 'BTN_TL':
                self.LeftBumper = event.state
            elif event.code == 'BTN_TR':
                self.RightBumper = event.state
            elif event.code == 'BTN_SOUTH':
                self.A = event.state
            elif event.code == 'BTN_NORTH':
                self.Y = event.state
            elif event.code == 'BTN_WEST':
                self.X = event.state
            elif event.code == 'BTN_EAST':
                self.B = event.state
            elif event.code == 'BTN_THUMBL':
                self.LeftThumb = event.state
            elif event.code == 'BTN_THUMBR':
                self.RightThumb = event.state
            elif event.code == 'BTN_SELECT':
                self.Back = event.state
            elif event.code == 'BTN_START':
                self.Start = event.state
            elif event.code == 'BTN_TRIGGER_HAPPY1':
                self.LeftDpad = event.state
            elif event.code == 'BTN_TRIGGER_HAPPY2':
                self.RightDpad = event.state
            elif event.code == 'BTN_TRIGGER_HAPPY3':
                self.UpDpad = event.state
            elif event.code == 'BTN_TRIGGER_HAPPY4':
                self.DownDpad = event.state
                
        



class Xbox_publisher(Node):
    def __init__(self):
        super().__init__('Xbox_publisher')
        self.publisher_ = self.create_publisher(Control, 'topic', 10)
        timer_period = 0.5
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.xbox_control = XboxController()
        
    def timer_callback(self):
        msg_data = self.xbox_control.read()
        msg = Control()
        msg.x = msg_data[0]
        msg.y = msg_data[0]
        msg.a_button = msg_data[2]
        msg.b_button = msg_data[3]
        msg.bumper_right = msg_data[4]
        self.publisher_.publish(msg)
        self.getlogger().info('Publishing X Joystick Data: "%f"' % msg.x)

def main(args=None):
    rclpy.init(args=args)
    
    xbox = XboxController()
    publisher = Xbox_publisher()

    rclpy.spin(publisher)

    publisher.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

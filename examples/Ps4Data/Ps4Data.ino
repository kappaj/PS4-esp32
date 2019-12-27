#include <PS4Controller.h>

void setUp()
{
    Serial.begin(9600);
    PS4.begin("03:03:03:03:03:03");
    Serial.println("Ready.");
}

void loop()
{
		// Below has all accessible outputs from the controller
    if(PS4.isConnected()) {
			
			if ( PS4.data.button.Up )
					Serial.println("Up Button");
			if ( PS4.data.button.Down )
					Serial.println("Down Button");
			if ( PS4.data.button.Left )
					Serial.println("Left Button");
			if ( PS4.data.button.Right )
					Serial.println("Right Button");
				
			if ( PS4.data.button.UpRight )
					Serial.println("Up Right");
			if ( PS4.data.button.UpLeft )
					Serial.println("Up Left");
			if ( PS4.data.button.DownLeft )
					Serial.println("Down Left");
			if ( PS4.data.button.DownRight )
					Serial.println("Down Right");
				
			if ( PS4.data.button.triangle )
					Serial.println("Triangle Button");
			if ( PS4.data.button.circle )
					Serial.println("Circle Button");
			if ( PS4.data.button.cross )
					Serial.println("Cross Button");
			if ( PS4.data.button.square )
					Serial.println("Square Button");
				
			if ( PS4.data.button.l1 )
					Serial.println("l1 Button");
			if ( PS4.data.button.r1 )
					Serial.println("r1 Button");
				
			if ( PS4.data.button.l3 )
					Serial.println("l3 Button");
			if ( PS4.data.button.r3 )
					Serial.println("r3 Button");
				
			if ( PS4.data.button.share )
					Serial.println("Share Button");
			if ( PS4.data.button.options )
					Serial.println("Options Button");
				
			if ( PS4.data.button.ps )
					Serial.println("PS Button");
			if ( PS4.data.button.touchpad )
					Serial.println("Touch Pad Button");
				
			if ( PS4.data.button.l2 ) {
					Serial.print("l2 button at ");
					Serial.println(PS4.data.analog.button.l2, DEC);
			}
			if ( PS4.data.button.r2 ) {
					Serial.print("r2 button at ");
					Serial.println(PS4.data.analog.button.r2, DEC);
			}

			if ( PS4.event.analog_move.stick.lx ) {
					Serial.print("Left Stick x at ");
					Serial.println(PS4.data.analog.stick.lx, DEC);
			}
			if ( PS4.event.analog_move.stick.ly ) {
					Serial.print("Left Stick y at ");
					Serial.println(PS4.data.analog.stick.ly, DEC);
			}
			if ( PS4.event.analog_move.stick.rx ) {
					Serial.print("Right Stick x at ");
					Serial.println(PS4.data.analog.stick.rx, DEC);
			}
			if ( PS4.event.analog_move.stick.ry ) {
					Serial.print("Right Stick y at ");
					Serial.println(PS4.data.analog.stick.ry, DEC);
			}

		 Serial.println();
		 // This delay is to make the Serial Print more human readable
		 // Remove it when you're not trying to see the output
     delay(1000);
    }
}
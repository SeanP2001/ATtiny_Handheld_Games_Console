
#include "Button.h"

Button::Button(int _pin, uint8_t _lowerBound, uint8_t _upperBound)
{
  this->pin = _pin;
  this->lowerBound = _lowerBound;
  this->upperBound = _upperBound;
}


bool Button::isPressed()
{
  buttonState = LOW;                                                                            // the button is low by default
   
  buttonValue = analogRead(pin);                                                                // read the button pin output
  
  if ((buttonValue > lowerBound) && (buttonValue <= upperBound))                                // if it is in the button range, set the button state HIGH
    buttonState = HIGH;
  

  if ((buttonState != lastButtonState)&&(millis()>(stateChangeTime + debounceDelay)))           // if the button has changed state and the debounce delay has passed
  {
    if (buttonState == HIGH)                                                                    // if it changed to HIGH
    {
      stateChangeTime = millis();
      return true;                                                                              // return TRUE
    }
  }
  lastButtonState = buttonState;                                                                // log the button state
  
  return false;                                                                                 // otherwise, return FALSE                                                         
}

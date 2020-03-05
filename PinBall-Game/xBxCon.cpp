#include "xBxCon.h"

xBxController::xBxController()
{
	m_currentState.A = false;
	m_currentState.B = false;
	m_currentState.X = false;
	m_currentState.Y = false;
	m_currentState.LB = false;
	m_currentState.RB = false;
	m_currentState.LeftThumbStickClick = false;
	m_currentState.RightThumbStickClick = false;
	m_currentState.DpadUp = false;
	m_currentState.DpadDown = false;
	m_currentState.DpadLeft = false;
	m_currentState.DpadRight = false;
	m_currentState.Options = false;
	m_currentState.Menu = false;
	float Righttrigger = 0.0f;
	float LeftTrigger = 0.0f;
	sf::Vector2f RightThumbStickAxis = sf::Vector2f(0.0f, 0.0f);
	sf::Vector2f LeftThumbStickAxis = sf::Vector2f(0.0f, 0.0f);

	m_previousState.A = false;
	m_previousState.B = false;
	m_previousState.X = false;
	m_previousState.Y = false;
	m_previousState.LB = false;
	m_previousState.RB = false;
	m_previousState.LeftThumbStickClick = false;
	m_previousState.RightThumbStickClick = false;
	m_previousState.DpadUp = false;
	m_previousState.DpadDown = false;
	m_previousState.DpadLeft = false;
	m_previousState.DpadRight = false;
	m_previousState.Options = false;
	m_previousState.Menu = false;

}

xBxController::~xBxController()
{}

void xBxController::update()
{
	gamepad.update();
	updateFace();
	updateDpad();
}

void xBxController::updateFace()
{
	if (!gamepad.isButtonPressed(0, 0))
	{
		m_previousState.A = false;
		m_currentState.A = false;
	}
	else if (m_currentState.A == false && m_previousState.A == false)
	{
		m_previousState.A = false;
		m_currentState.A = true;
	}
	else if(m_currentState.A == true && m_previousState.A == false)
	{
		m_previousState.A = true;
		m_currentState.A = false;
	}

//---------------------------------------------------------------------------

	if (!gamepad.isButtonPressed(0, 1))
	{
		m_previousState.B = false;
		m_currentState.B = false;
	}
	else if (m_currentState.B == false && m_previousState.B == false)
	{
		m_previousState.B = false;
		m_currentState.B = true;
	}
	else if (m_currentState.B == true && m_previousState.B == false)
	{
		m_previousState.B = true;
		m_currentState.B = false;
	}

//---------------------------------------------------------------------------

	if (!gamepad.isButtonPressed(0, 2))
	{
		m_previousState.X = false;
		m_currentState.X = false;
	}
	else if (m_currentState.X == false && m_previousState.X == false)
	{
		m_previousState.X = false;
		m_currentState.X = true;
	}
	else if (m_currentState.X == true && m_previousState.X == false)
	{
		m_previousState.X = true;
		m_currentState.X = false;
	}

//---------------------------------------------------------------------------

	if (!gamepad.isButtonPressed(0, 3))
	{
		m_previousState.Y = false;
		m_currentState.Y = false;
	}
	else if (m_currentState.Y == false && m_previousState.Y == false)
	{
		m_previousState.Y = false;
		m_currentState.Y = true;
	}
	else if (m_currentState.Y == true && m_previousState.Y == false)
	{
		m_previousState.Y = true;
		m_currentState.Y = false;
	}

	//---------------------------------------------------------------------------

	if (!gamepad.isButtonPressed(0, 4))
	{
		m_previousState.LB = false;
		m_currentState.LB = false;
	}
	else if (m_currentState.LB == false && m_previousState.LB == false)
	{
		m_previousState.LB = false;
		m_currentState.LB = true;
	}
	else if (m_currentState.LB == true && m_previousState.LB == false)
	{
		m_previousState.LB = true;
		m_currentState.LB = false;
	}

	//---------------------------------------------------------------------------

	if (!gamepad.isButtonPressed(0, 5))
	{
		m_previousState.RB = false;
		m_currentState.RB = false;
	}
	else if (m_currentState.RB == false && m_previousState.RB == false)
	{
		m_previousState.RB = false;
		m_currentState.RB = true;
	}
	else if (m_currentState.RB == true && m_previousState.RB == false)
	{
		m_previousState.RB = true;
		m_currentState.RB = false;
	}

	//---------------------------------------------------------------------------

	if (!gamepad.isButtonPressed(0, 6))
	{
		m_previousState.LeftThumbStickClick = false;
		m_currentState.LeftThumbStickClick = false;
	}
	else if (m_currentState.LeftThumbStickClick == false && m_previousState.LeftThumbStickClick == false)
	{
		m_previousState.LeftThumbStickClick = false;
		m_currentState.LeftThumbStickClick = true;
	}
	else if (m_currentState.LeftThumbStickClick == true && m_previousState.LeftThumbStickClick == false)
	{
		m_previousState.LeftThumbStickClick = true;
		m_currentState.LeftThumbStickClick = false;
	}

	//---------------------------------------------------------------------------

	if (!gamepad.isButtonPressed(0, 7))
	{
		m_previousState.RightThumbStickClick = false;
		m_currentState.RightThumbStickClick = false;
	}
	else if (m_currentState.RightThumbStickClick == false && m_previousState.RightThumbStickClick == false)
	{
		m_previousState.RightThumbStickClick = false;
		m_currentState.RightThumbStickClick = true;
	}
	else if (m_currentState.RightThumbStickClick == true && m_previousState.RightThumbStickClick == false)
	{
		m_previousState.RightThumbStickClick = true;
		m_currentState.RightThumbStickClick = false;
	}

	//---------------------------------------------------------------------------

	if (!gamepad.isButtonPressed(0, 8))
	{
		m_previousState.Options = false;
		m_currentState.Options = false;
	}
	else if (m_currentState.Options == false && m_previousState.Options == false)
	{
		m_previousState.Options = false;
		m_currentState.Options = true;
	}
	else if (m_currentState.Options == true && m_previousState.Options == false)
	{
		m_previousState.Options = true;
		m_currentState.Options = false;
	}
	//---------------------------------------------------------------------------

	if (!gamepad.isButtonPressed(0, 9))
	{
		m_previousState.Menu = false;
		m_currentState.Menu = false;
	}
	else if (m_currentState.Menu == false && m_previousState.Menu == false)
	{
		m_previousState.Menu = false;
		m_currentState.Menu = true;
	}
	else if (m_currentState.Menu == true && m_previousState.Menu == false)
	{
		m_previousState.Menu = true;
		m_currentState.Menu = false;
	}

}

void xBxController::updateDpad()
{
	
	dpadAxis.x = gamepad.getAxisPosition(0, sf::Joystick::Axis::PovX);
	dpadAxis.y = gamepad.getAxisPosition(0, sf::Joystick::Axis::PovY);

	if (dpadAxis.x > dpadThreshold)
	{
		if (m_currentState.DpadRight == false && m_previousState.DpadRight == false)
		{
			m_currentState.DpadRight = true;
		}
		else if (m_currentState.DpadRight == true && m_previousState.DpadRight == false)
		{
			m_currentState.DpadRight = false;
			m_previousState.DpadRight = true;
		}
	}
	else if (dpadAxis.x < dpadThreshold)
	{
		m_currentState.DpadRight = false;
		m_previousState.DpadRight = false;
	}

	if (dpadAxis.x < -dpadThreshold)
	{
		if (m_currentState.DpadLeft == false && m_previousState.DpadLeft == false)
		{
			m_currentState.DpadLeft = true;
		}
		else if (m_currentState.DpadLeft == true && m_previousState.DpadLeft == false)
		{
			m_currentState.DpadLeft = false;
			m_previousState.DpadLeft = true;
		}
	}
	else if (dpadAxis.x > -dpadThreshold)
	{
		m_currentState.DpadLeft = false;
		m_previousState.DpadLeft = false;
	}

	if (dpadAxis.y > dpadThreshold)
	{
		if (m_currentState.DpadUp == false && m_previousState.DpadUp == false)
		{
			m_currentState.DpadUp = true;
		}
		else if (m_currentState.DpadUp == true && m_previousState.DpadUp == false)
		{
			m_currentState.DpadUp = false;
			m_previousState.DpadUp = true;
		}
	}
	else if (dpadAxis.y < dpadThreshold)
	{
		m_currentState.DpadUp = false;
		m_previousState.DpadUp = false;
	}

	if (dpadAxis.y < -dpadThreshold)
	{
		if (m_currentState.DpadDown == false && m_previousState.DpadDown == false)
		{
			m_currentState.DpadDown = true;
		}
		else if (m_currentState.DpadDown == true && m_previousState.DpadDown == false)
		{
			m_currentState.DpadDown = false;
			m_previousState.DpadDown = true;
		}
	}
	else if(dpadAxis.y > -dpadThreshold)
	{
		m_currentState.DpadDown = false;
		m_previousState.DpadDown = false;
	}

}


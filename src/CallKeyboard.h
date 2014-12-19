/*
 * CallKeyboard.h
 *
 *  Created on: 19/12/2014
 *      Author: gualberto
 */

#ifndef CALLKEYBOARD_H_
#define CALLKEYBOARD_H_
#include <bb/AbstractBpsEventHandler>
#include <bps/bps.h>
#include<bps/netstatus.h>
#include<bps/locale.h>
#include<bps/virtualkeyboard.h>
#include<bps/navigator.h>
#include <bps/event.h>
#include "applicationui.hpp"

class CallKeyboard : public bb::AbstractBpsEventHandler
{


public:
    CallKeyboard(ApplicationUI*);
    virtual ~CallKeyboard();
    virtual void event(bps_event_t *event);
    void callKeyboardEmail();
    void callKeyboardNumber();
private:
    ApplicationUI*m_appUI;
};

#endif /* CALLKEYBOARD_H_ */

#ifndef _POLICECHATFORM_H
#define _POLICECHATFORM_H

#include "Gui.h"
#include "GenericChatForm.h"

class PoliceChatForm: public GenericChatForm {
public:
	PoliceChatForm();
private:
	void HangUp(GenericChatForm *form, int val);
};

#endif /* _POLICECHATFORM_H */
#pragma once
#include "baseopenasdlg.h"
#include <shlobj.h>
#include <stdio.h>

class CClassicOpenAsDlg : public CBaseOpenAsDlg
{
private:
	void _InitProgList();
	wil::com_ptr<IAssocHandler> _GetSelectedItem();
	void _SelectItemByIndex(int index);
	void _SetupCategories();
	void _AddItem(wil::com_ptr<IAssocHandler> pItem, int index, bool fForceSelect);

public:
	CClassicOpenAsDlg(LPCWSTR lpszPath, IMMERSIVE_OPENWITH_FLAGS flags, bool fUri, bool fPreregistered);
};
// Stable CParamList declaration for code that does not need parameter externs.
#if !defined(AFX_PARAMLISTCORE_H__INCLUDED_)
#define AFX_PARAMLISTCORE_H__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif

#include "ParamRegister.h"

class CParamList : public CParamRegister
{
public:
	bool AssemblingParamList;
public:
	CParamList();
	void Initialize();
	virtual ~CParamList();
	void AdaptMenu0RadioButtonBoxVariables();
	void AddSrFlashType(int FlashNr, bool AQuRAImaging1,bool AQuRAImaging2,bool AQuRAImaging3, bool blueAOM1, bool blueAOM2, bool redAOM, bool dipTrapAOM);
	void AddRbFlashType(int FlashNr);
	void AddBlowAwayFlash(int FlashNr);
	void AddIsotopeConfiguration(int IsotopeConfigurationNr);
	void AddTakePicture();
	void AddFlashTypes();
	void AddCameras();
	bool AssembleSequence();
};

#endif

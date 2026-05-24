// Private implementation dependencies for CSequence .cpp files.
// Keep Sequence.h small so unrelated implementation headers do not become
// transitive dependencies of every source file that only needs CSequence.

#if !defined(AFX_SEQUENCE_IMPLEMENTATION_INCLUDES_H__INCLUDED_)
#define AFX_SEQUENCE_IMPLEMENTATION_INCLUDES_H__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "IOList.h"
#include "ParamList.h"
#include "UtilityDialog.h"
#include "MeasurementList.h"
#include "Control.h"
#include "EthernetMultiIOControllerOpticsFoundry.h"
#include <fstream>
#include <string>

#include "SystemParamList.h"
#include "color.h"
#include "Ramp.h"
#include "CosineRamp.h"
#include "CosineSquareRamp.h"
#include "RampdBLinear.h"
#include "ParabolicRamp.h"
#include "SineRamp.h"
#include "TweezerRamp.h"
#include "StepwiseLinearRamp.h"
#include "Sin.h"
#include "Pulse.h"
#include "BlackmanPulse.h"
#include "Square.h"
#include "SlaveWaveform.h"
#include "Grid2DWaveform.h"
#include "TimeStretch.h"
#include "Output.h"
#include "NetIO.h"
#include "Param.h"
#include "MeasurementPoint.h"
#include "ExecuteMeasurementDlg.h"
#include "MeasurementQueue.h"
#include "UniMessList.h"
#include "SRS345.h"
#include "HP5334A.h"
#include "RSSML0x.h"
#include "EIP548A.h"
#include "Agilent33250A.h"
#include "Agilent33250ASerial.h"
#include "TektronixAWG5105.h"
#include "EvaporationSweep.h"
#include "Rectangle.h"
#include "DelayedWaveform.h"
#include "FiberLaser.h"
#include "VerdiLaser.h"
#include "burleighWA1000.h"
#include "OmegaiSeries.h"
#include <time.h>
#include <sys/timeb.h>
#include "SlaveIO.h"
#include "Linear.h"
#include "Polynom.h"
#include "RangeCheck.h"
#include "ConsecutiveCalibration.h"
#include "Vision.h"
#include "VCOCalibration.h"
#include "StepwiseLinearCalibration.h"
#include "Slide.h"
#include "ni488.h"
#include "spline.h"
#include "DDSCalibration.h"
#include "LaserLock.h"
#include "TektronixTDS524A.h"
#include "OvenControl.h"
#include "Utilities.h"
#include "IPGLaser.h"
#include "Windows.h"
#include "Mmsystem.h"
#include "RemoteControl.h"
#include "RunProgressDlg.h"
#include "Keithley2000.h"
#include "SequenceListPoint.h"
#include "SequenceListWaveform.h"
#include "SequenceListAnalogOut.h"
#include "EasyDialog.h"
#include "AD9852.h"
#include "AD9858.h"
#include "AD9959.h"
#include "ADF4351.h"
#include "PixelFont.h"
#include "Mesh3D.h"
#include "ControlAPI.h"
#include "CTimestamp.h"
#include "CoilDriverTorun3x3A.h"
#include "CoilDriverTorun100A.h"
#include "RemoteResetServer.h"
#pragma comment(lib, "winmm.lib")
#include "CHardwareConfig.h"
#include "CUserIOConfig.h"
#include <atlconv.h> // Required for CT2A

#endif // !defined(AFX_SEQUENCE_IMPLEMENTATION_INCLUDES_H__INCLUDED_)

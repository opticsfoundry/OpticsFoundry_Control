// Shared IO-list constants that are needed without the full CIOList declaration.

#if !defined(AFX_IOLISTCONSTANTS_H__INCLUDED_)
#define AFX_IOLISTCONSTANTS_H__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

// Define numbers where the lists of the DDS outputs for each element in sequence.cpp starts
// Start AD9852 DDS
const unsigned int AQuRATestDDSAD9852StartNr = 0;     // AQuRA Test 9852
const unsigned int AQuRARedAD9852DDSStartNr = 1;      // AQuRA Red 9852
const unsigned int AQuRADT9852StartNr = 27;           // AQuRA DT 9852
const unsigned int OtherDDS9852StartNr = 34;          // AQuRA Other 9852

// Start AD9858 DDS
const unsigned int AQuRATestDDSAD9858StartNr = 0;
const unsigned int AQuRABlueStartNr = 9;              // AQuRA Blue 9858
const unsigned int AQuRARedStartNr = 13;              // AQuRA Red 9858
const unsigned int AQuRADT9858StartNr = 35;           // AQuRA DT 9858

const unsigned int NrAnalogInBoxes = 2;
constexpr unsigned int IPGLaserNumber = 10;
const unsigned int NrKeithleyMultimeter = 1;

#endif // !defined(AFX_IOLISTCONSTANTS_H__INCLUDED_)

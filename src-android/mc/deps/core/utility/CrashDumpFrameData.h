#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct CrashDumpFormatEntryImpl;
// clang-format on

struct CrashDumpFrameData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>  mNumControllers;
    ::ll::TypedStorage<4, 4, uint>  mPrimaryControllerId;
    ::ll::TypedStorage<8, 8, ulong> mFreeMemory;
    ::ll::TypedStorage<4, 4, float> mX;
    ::ll::TypedStorage<4, 4, float> mY;
    ::ll::TypedStorage<4, 4, float> mZ;
    ::ll::TypedStorage<4, 4, float> mDirection;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CrashDumpFrameData(int, int, ulong, float, float, float, float);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::CrashDumpFormatEntryImpl const[7]> kFormat();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(int, int, ulong, float, float, float, float);
    // NOLINTEND
};

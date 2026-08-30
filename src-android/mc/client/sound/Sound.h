#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
namespace Json { class Value; }
// clang-format on

struct Sound {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<4, 4, float>        mVolumeMin;
    ::ll::TypedStorage<4, 4, float>        mPitchMin;
    ::ll::TypedStorage<4, 4, float>        mVolumeMax;
    ::ll::TypedStorage<4, 4, float>        mPitchMax;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Sound(::Sound const&);

    MCNAPI Sound(::Json::Value const&, std::string const&, float, float, float, float);

    MCNAPI float getPitch(::Random&) const;

    MCNAPI float getVolume(::Random&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Sound const&);

    MCNAPI void* $ctor(::Json::Value const&, std::string const&, float, float, float, float);
    // NOLINTEND
};

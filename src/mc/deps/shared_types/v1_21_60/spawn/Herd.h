#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy::Spawn { struct Herd; }
// clang-format on
#endif // @header-generator platform

namespace SharedTypes::v1_21_60::Spawn {

struct Herd {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, int>          mMin;
    ::ll::TypedStorage<4, 4, int>          mMax;
    ::ll::TypedStorage<4, 4, int>          mInitEventCount;
    ::ll::TypedStorage<4, 4, int>          mEventSkipCount;
    ::ll::TypedStorage<8, 24, std::string> mInitialEvent;
    ::ll::TypedStorage<8, 24, std::string> mEvent;
#else // @header-generator platform
    ::ll::TypedStorage<4, 4, int>            mMin;
    ::ll::TypedStorage<4, 4, int>            mMax;
    ::ll::TypedStorage<4, 4, int>            mInitEventCount;
    ::ll::TypedStorage<4, 4, int>            mEventSkipCount;
    ::ll::TypedStorage<8, 32, ::std::string> mInitialEvent;
    ::ll::TypedStorage<8, 32, ::std::string> mEvent;
    // NOLINTEND

public:
    // prevent constructor by default
    Herd& operator=(Herd const&);
    Herd();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Herd(::SharedTypes::v1_21_60::Spawn::Herd const&);

    MCAPI bool operator==(::SharedTypes::v1_21_60::Spawn::Herd const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SharedTypes::v1_21_60::Spawn::Herd from(::SharedTypes::Legacy::Spawn::Herd const& val);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SharedTypes::v1_21_60::Spawn::Herd const&);
#endif // @header-generator platform
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::Spawn

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct DisconnectionErrorStrings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string> codeword;
    ::ll::TypedStorage<8, 24, std::string> title;
    ::ll::TypedStorage<8, 24, std::string> body;
    ::ll::TypedStorage<8, 24, std::string> webUrl;
    ::ll::TypedStorage<1, 1, bool>         isReconnectable;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DisconnectionErrorStrings(::DisconnectionErrorStrings const&);

    MCNAPI bool operator==(::DisconnectionErrorStrings const&) const;

    MCNAPI ~DisconnectionErrorStrings();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::DisconnectionErrorStrings const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

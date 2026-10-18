#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
// clang-format on

class CommandContext {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, std::string>                   mCommand;
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandOrigin>> mOrigin;
    ::ll::TypedStorage<4, 4, int>                            mVersion;
#else // @header-generator platform
    ::std::string                      mCommand;
    ::std::unique_ptr<::CommandOrigin> mOrigin;
    int                                mVersion;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    CommandContext();

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::CommandOrigin const& getCommandOrigin() const;
#else // @header-generator platform
    MCAPI CommandContext(::std::string const& cmd, ::std::unique_ptr<::CommandOrigin> origin, int version);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ~CommandContext();
#else // @header-generator platform
    MCAPI ~CommandContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& cmd, ::std::unique_ptr<::CommandOrigin> origin, int version);
#endif // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

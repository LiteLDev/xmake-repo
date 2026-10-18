#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/world/level/CommandOriginSystem.h"

// auto generated forward declare list
// clang-format off
#if defined(LL_PLAT_A) // @header-generator platform
class Command;
class ILevel;
#else // @header-generator platform
#endif // @header-generator platform
class RenderParams;
// clang-format on

class CommandResponseBase {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::CurrentCmdVersion>                  mCommandVersion;
    ::ll::TypedStorage<8, 24, std::vector<HashedString>>           mRawCommands;
    ::ll::TypedStorage<2, 2, ::SharedTypes::Legacy::FilterSubject> mTarget;
    ::ll::TypedStorage<8, 24, std::vector<Command*>>               mCompiledCommands;
    ::ll::TypedStorage<1, 1, bool>                                 mIsCompiled;
    ::ll::TypedStorage<1, 1, bool>                                 mSuccess;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk629bfc;
    ::ll::UntypedStorage<8, 24> mUnk6789cf;
    ::ll::UntypedStorage<2, 2>  mUnkfb0f5b;
    ::ll::UntypedStorage<8, 24> mUnk858109;
    ::ll::UntypedStorage<1, 1>  mUnk40620b;
    ::ll::UntypedStorage<1, 1>  mUnk2e87c2;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    CommandResponseBase& operator=(CommandResponseBase const&);
    CommandResponseBase(CommandResponseBase const&);
    CommandResponseBase();
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~CommandResponseBase();
#else // @header-generator platform
    virtual ~CommandResponseBase() = default;
#endif // @header-generator platform

    virtual ::CommandOriginSystem _getCommandOriginSystem() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _addCommand(std::string const&);
#else // @header-generator platform
    MCNAPI void _addCommand(::std::string const& entry);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _executeAction(::RenderParams&) const;
#else // @header-generator platform
    MCNAPI void _executeAction(::RenderParams& params) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& NameID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI static ::std::string const& NameID();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::CommandOriginSystem $_getCommandOriginSystem() const;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

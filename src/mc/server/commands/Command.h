#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandFlag.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/server/commands/CommandOriginType.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
#if defined(LL_PLAT_A) // @header-generator platform
class CommandRunStats;
#else // @header-generator platform
#endif // @header-generator platform
class CommandSelectorBase;
#if defined(LL_PLAT_A) // @header-generator platform
class Player;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class Command {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                      mVersion;
    ::ll::TypedStorage<8, 8, ::CommandRegistry const*> mRegistry;
    ::ll::TypedStorage<4, 4, int>                      mCommandSymbol;
    ::ll::TypedStorage<1, 1, ::CommandPermissionLevel> mPermissionLevel;
    ::ll::TypedStorage<2, 2, ::CommandFlag>            mFlags;
    // NOLINTEND

#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    LLNDAPI std::string getCommandName() const;

#endif // @header-generator platform
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~Command();
#else // @header-generator platform
    virtual ~Command() = default;
#endif // @header-generator platform

    virtual bool collectOptionalArguments();

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const = 0;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const = 0;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI Command();
#else // @header-generator platform
    MCAPI void run(::CommandOrigin const& origin, ::CommandOutput& output) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string getCommandName() const;

    MCNAPI ::CommandRegistry const& getRegistry() const;

    MCNAPI bool hasFlag(::CommandFlag) const;

    MCNAPI void run(::CommandOrigin const&, ::CommandOutput&) const;

    MCNAPI void sendTelemetry(::CommandOrigin const&, ::CommandOutput&) const;

    MCNAPI bool shouldSendTelemetry(::CommandOrigin const&) const;
#else // @header-generator platform
    MCAPI void sendTelemetry(::CommandOrigin const& origin, ::CommandOutput& output) const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::Player* getPlayerFromOrigin(::CommandOrigin const&);
#else // @header-generator platform
    MCAPI static bool isWildcard(::CommandSelectorBase const& selector);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isTemplateLockedAction(::CommandOrigin const&);
#else // @header-generator platform
    MCAPI static bool shouldUseCommandOriginRotation(::CommandOrigin const& origin, int version);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isWildcard(::CommandSelectorBase const&);
#else // @header-generator platform
    MCAPI static bool validRange(int input, int low, int high, ::CommandOutput& output);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool shouldUseCommandOriginRotation(::CommandOrigin const&, int);

    MCNAPI static bool validData(int, ushort&, ::CommandOutput&);

    MCNAPI static bool validRange(int, int, int, ::CommandOutput&);

    MCNAPI static bool validRange(float, float, float, ::CommandOutput&);
#else // @header-generator platform
    MCAPI static bool validRange(float input, float low, float high, ::CommandOutput& output);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::string const& WILDCARD_TOKEN();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI static ::std::string const& WILDCARD_TOKEN();
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $collectOptionalArguments();
    // NOLINTEND
#else // @header-generator platform
    MCFOLD bool $collectOptionalArguments();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::std::unique_ptr<::Command, ::std::default_delete<::Command> >>();
// clang-format on
#endif // @header-generator platform

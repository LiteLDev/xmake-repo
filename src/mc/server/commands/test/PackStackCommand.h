#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ServerCommand.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class ResourcePackStack;
#if defined(LL_PLAT_A) // @header-generator platform
struct PackInfo;
#else // @header-generator platform
#endif // @header-generator platform
// clang-format on

class PackStackCommand : public ::ServerCommand {
public:
    // PackStackCommand inner types define
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    enum class ExcludeVanilla : int {
        Exclude = 0,
        Include = 1,
    };

#endif // @header-generator platform
    enum class StackType : int {
        Server    = 0,
        Client    = 1,
        Undefined = 2,
    };

    enum class Verbose : int {
        Verbose = 0,
        Normal  = 1,
#if defined(LL_PLAT_A) // @header-generator platform
    };

    enum class ExcludeVanilla : int {
        Exclude = 0,
        Include = 1,
#else // @header-generator platform
#endif // @header-generator platform
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PackStackCommand::StackType>      mStackType;
    ::ll::TypedStorage<4, 4, ::PackStackCommand::Verbose>        mVerbose;
    ::ll::TypedStorage<4, 4, ::PackStackCommand::ExcludeVanilla> mExcludeVanilla;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PackStackCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void outputPackStack(::CommandOutput&, ::ResourcePackStack const&, bool, bool);
#else // @header-generator platform
    MCAPI static void
    outputPackStack(::CommandOutput& output, ::ResourcePackStack const& stack, bool isVerbose, bool excludeVanilla);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void outputWorldTemplateData(::CommandOutput&, std::string const&, std::string const&, bool);
#else // @header-generator platform
    MCAPI static void outputWorldTemplateData(
        ::CommandOutput&     output,
        ::std::string const& worldTemplateID,
        ::std::string const& worldTemplateVersion,
        bool                 isVerbose
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void setup(::CommandRegistry&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void setup(::CommandRegistry& registry);
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND
#else // @header-generator platform
    MCAPI void $execute(::CommandOrigin const& origin, ::CommandOutput& output) const;
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

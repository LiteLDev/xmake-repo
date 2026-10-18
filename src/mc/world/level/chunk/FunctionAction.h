#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/IRequestAction.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CompoundTag;
class Dimension;
class ICommandOriginLoader;
class ServerLevel;
// clang-format on

class FunctionAction : public ::IRequestAction {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, std::unique_ptr<CommandOrigin>> mCommandOrigin;
    ::ll::TypedStorage<8, 24, std::string>                   mFilePath;
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandOrigin>> mCommandOrigin;
    ::ll::TypedStorage<8, 32, ::std::string>                     mFilePath;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    FunctionAction();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~FunctionAction();
#else // @header-generator platform
    virtual ~FunctionAction() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void execute(::ServerLevel&, ::Dimension&);
#else // @header-generator platform
    virtual void execute(::ServerLevel& level, ::Dimension& dimension) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void serialize(::CompoundTag&);
#else // @header-generator platform
    virtual void serialize(::CompoundTag& tag) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool operator==(::IRequestAction const&) const;
#else // @header-generator platform
    virtual bool operator==(::IRequestAction const& action) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& getFilePath() const;
#else // @header-generator platform
    MCAPI FunctionAction(::std::string const& filePath, ::std::unique_ptr<::CommandOrigin> commandOrigin);
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static bool isValidTag(::CompoundTag const&);
#else // @header-generator platform
    MCAPI static bool isValidTag(::CompoundTag const& tag);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unique_ptr<FunctionAction> load(::CompoundTag const&, ::ICommandOriginLoader&);
#else // @header-generator platform
    MCAPI static ::std::unique_ptr<::FunctionAction> load(::CompoundTag const& tag, ::ICommandOriginLoader& loader);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& filePath, ::std::unique_ptr<::CommandOrigin> commandOrigin);
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

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $execute(::ServerLevel&, ::Dimension&);
#else // @header-generator platform
    MCAPI void $execute(::ServerLevel& level, ::Dimension& dimension);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $serialize(::CompoundTag&);
#else // @header-generator platform
    MCAPI void $serialize(::CompoundTag& tag);


#endif // @header-generator platform
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

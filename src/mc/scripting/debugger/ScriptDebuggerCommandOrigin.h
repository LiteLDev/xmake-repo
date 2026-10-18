#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/world/level/dimension/DimensionType.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class Dimension;
class Level;
class ServerLevel;
class Vec2;
class Vec3;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
struct DimensionType;
#endif // @header-generator platform
// clang-format on

class ScriptDebuggerCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 8, ::ServerLevel&>           mServerLevel;
    ::ll::TypedStorage<1, 1, ::CommandPermissionLevel> mPermissionLevel;
    ::ll::UntypedStorage<4, 12>                        mDimensionType;
    ::ll::UntypedStorage<8, 48>                        mOutputCallback;
#else // @header-generator platform
    ::ll::UntypedStorage<8, 8>  mUnk2a0cc2;
    ::ll::UntypedStorage<1, 1>  mUnkb047b6;
    ::ll::UntypedStorage<4, 4>  mUnkfef23a;
    ::ll::UntypedStorage<8, 64> mUnk494336;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebuggerCommandOrigin& operator=(ScriptDebuggerCommandOrigin const&);
    ScriptDebuggerCommandOrigin(ScriptDebuggerCommandOrigin const&);
    ScriptDebuggerCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~ScriptDebuggerCommandOrigin();
#else // @header-generator platform
    virtual ~ScriptDebuggerCommandOrigin() /*override*/ = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getRequestId() const;
#else // @header-generator platform
    virtual ::std::string const& getRequestId() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getName() const;
#else // @header-generator platform
    virtual ::std::string getName() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::BlockPos getBlockPosition() const;
#else // @header-generator platform
    virtual ::BlockPos getBlockPosition() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Vec3 getWorldPosition() const;
#else // @header-generator platform
    virtual ::Vec3 getWorldPosition() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::optional<Vec2> getRotation() const;
#else // @header-generator platform
    virtual ::std::optional<::Vec2> getRotation() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Level* getLevel() const;
#else // @header-generator platform
    virtual ::Level* getLevel() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Dimension* getDimension() const;
#else // @header-generator platform
    virtual ::Dimension* getDimension() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Actor* getEntity() const;
#else // @header-generator platform
    virtual ::Actor* getEntity() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CommandPermissionLevel getPermissionsLevel() const;
#else // @header-generator platform
    virtual ::CommandPermissionLevel getPermissionsLevel() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unique_ptr<CommandOrigin> clone() const;
#else // @header-generator platform
    virtual ::std::unique_ptr<::CommandOrigin> clone() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool canUseCommandsWithoutCheatsEnabled() const;
#else // @header-generator platform
    virtual bool canUseCommandsWithoutCheatsEnabled() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isSelectorExpansionAllowed() const;
#else // @header-generator platform
    virtual bool isSelectorExpansionAllowed() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::CommandOriginType getOriginType() const;
#else // @header-generator platform
    virtual ::CommandOriginType getOriginType() const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void handleCommandOutputCallback(int, std::string&&) const;
#else // @header-generator platform
    virtual void handleCommandOutputCallback(int successCount, ::std::string&& messages) const /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isValid() const;
#else // @header-generator platform
    virtual bool isValid() const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
#if defined(LL_PLAT_A) // @header-generator platform
    // destructor thunk
#else // @header-generator platform
    // member functions
#endif // @header-generator platform
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $dtor();
#else // @header-generator platform
    MCNAPI ScriptDebuggerCommandOrigin(
        ::ServerLevel&                              origin,
        ::CommandPermissionLevel                    permissionLevel,
        ::DimensionType                             dimensionType,
        ::std::function<void(int, ::std::string&&)> outputCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ServerLevel&                              origin,
        ::CommandPermissionLevel                    permissionLevel,
        ::DimensionType                             dimensionType,
        ::std::function<void(int, ::std::string&&)> outputCallback
    );
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getRequestId() const;
#else // @header-generator platform
    MCNAPI ::std::string const& $getRequestId() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getName() const;
#else // @header-generator platform
    MCNAPI ::std::string $getName() const;
#endif // @header-generator platform

    MCNAPI ::BlockPos $getBlockPosition() const;

    MCNAPI ::Vec3 $getWorldPosition() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::optional<Vec2> $getRotation() const;
#else // @header-generator platform
    MCNAPI ::std::optional<::Vec2> $getRotation() const;
#endif // @header-generator platform

    MCNAPI ::Level* $getLevel() const;

    MCNAPI ::Dimension* $getDimension() const;

    MCNAPI ::Actor* $getEntity() const;

    MCNAPI ::CommandPermissionLevel $getPermissionsLevel() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<CommandOrigin> $clone() const;
#else // @header-generator platform
    MCNAPI ::std::unique_ptr<::CommandOrigin> $clone() const;
#endif // @header-generator platform

    MCNAPI bool $canUseCommandsWithoutCheatsEnabled() const;

    MCNAPI bool $isSelectorExpansionAllowed() const;

    MCNAPI ::CommandOriginType $getOriginType() const;

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $handleCommandOutputCallback(int, std::string&&) const;
#else // @header-generator platform
    MCNAPI void $handleCommandOutputCallback(int successCount, ::std::string&& messages) const;
#endif // @header-generator platform

    MCNAPI bool $isValid() const;
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

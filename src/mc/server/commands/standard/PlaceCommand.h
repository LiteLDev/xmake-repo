#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandFilePath.h"
#include "mc/server/commands/CommandPosition.h"
#include "mc/server/commands/ServerCommand.h"
#include "mc/world/level/levelgen/v2/LiquidSettings.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
class CommandOrigin;
class CommandOutput;
class CommandRegistry;
class Dimension;
class Experiments;
class HashedString;
class IFeature;
struct BiomeDecorationFeature;
// clang-format on

class PlaceCommand : public ::ServerCommand {
public:
    // PlaceCommand inner types define
    enum class PlaceAction : int {
        Structure   = 0,
        Jigsaw      = 1,
        Feature     = 2,
        FeatureRule = 3,
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using BiomeDecorationFeatureMap = std::unordered_map<HashedString, BiomeDecorationFeature>;
#else // @header-generator platform
    using BiomeDecorationFeatureMap = ::std::unordered_map<::HashedString, ::BiomeDecorationFeature>;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    using PlaceResult = ::nonstd::expected<BoundingBox, std::string_view>;
#else // @header-generator platform
    using PlaceResult = ::nonstd::expected<::BoundingBox, ::std::string_view>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PlaceCommand::PlaceAction>    mPlaceAction;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 24, ::CommandFilePath>             mPool;
    ::ll::TypedStorage<8, 24, std::string>                   mTarget;
#else // @header-generator platform
    ::ll::TypedStorage<8, 32, ::CommandFilePath>             mPool;
    ::ll::TypedStorage<8, 32, ::std::string>                 mTarget;
#endif // @header-generator platform
    ::ll::TypedStorage<4, 4, int>                            mMaxDepth;
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::UntypedStorage<4, 20>                              mPosition;
    ::ll::TypedStorage<8, 24, std::string>                   mStructureOrFeatureName;
#else // @header-generator platform
    ::ll::TypedStorage<4, 16, ::CommandPosition>             mPosition;
    ::ll::TypedStorage<8, 32, ::std::string>                 mStructureOrFeatureName;
#endif // @header-generator platform
    ::ll::TypedStorage<8, 8, ::IFeature const*>              mFeature;
    ::ll::TypedStorage<1, 1, ::br::worldgen::LiquidSettings> mLiquidSettings;
    ::ll::TypedStorage<1, 1, bool>                           mPosIsSet;
    ::ll::TypedStorage<1, 1, bool>                           mIgnoreStartHeight;
    ::ll::TypedStorage<1, 1, bool>                           mKeepJigsaws;
    ::ll::TypedStorage<1, 1, bool>                           mIncludeEntities;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PlaceCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
#else // @header-generator platform
    virtual void execute(::CommandOrigin const& origin, ::CommandOutput& output) const /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::nonstd::expected<BoundingBox, std::string_view> placeJigsaw(
        std::string const&,
        std::string const&,
        schar,
        ::BlockPos const&,
        bool,
        bool,
        ::Dimension&,
        ::br::worldgen::LiquidSettings
#else // @header-generator platform
    MCAPI static ::nonstd::expected<::BoundingBox, ::std::string_view> placeJigsaw(
        ::std::string const&           pool,
        ::std::string const&           target,
        schar                          maxDepth,
        ::BlockPos const&              position,
        bool                           keepJigsaws,
        bool                           includeEntities,
        ::Dimension&                   dimension,
        ::br::worldgen::LiquidSettings liquidSettings
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::nonstd::expected<BoundingBox, std::string_view> placeStructure(
        std::string const&,
        ::BlockPos const&,
        ::Dimension&,
        bool,
        bool,
        bool,
        ::br::worldgen::LiquidSettings
#else // @header-generator platform
    MCAPI static ::nonstd::expected<::BoundingBox, ::std::string_view> placeStructure(
        ::std::string const&           id,
        ::BlockPos const&              pos,
        ::Dimension&                   dimension,
        bool                           ignoreStartHeight,
        bool                           keepJigsaws,
        bool                           includeEntities,
        ::br::worldgen::LiquidSettings liquidSettings
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static void
    setup(::CommandRegistry&, std::unordered_map<HashedString, BiomeDecorationFeature> const&, ::Experiments const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI static void setup(
        ::CommandRegistry&                                                    registry,
        ::std::unordered_map<::HashedString, ::BiomeDecorationFeature> const& biomeDecorationFeatures,
        ::Experiments const&
    );
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

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

    using BiomeDecorationFeatureMap = std::unordered_map<HashedString, BiomeDecorationFeature>;

    using PlaceResult = ::nonstd::expected<BoundingBox, std::string_view>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PlaceCommand::PlaceAction>    mPlaceAction;
    ::ll::TypedStorage<8, 24, ::CommandFilePath>             mPool;
    ::ll::TypedStorage<8, 24, std::string>                   mTarget;
    ::ll::TypedStorage<4, 4, int>                            mMaxDepth;
    ::ll::UntypedStorage<4, 20>                              mPosition;
    ::ll::TypedStorage<8, 24, std::string>                   mStructureOrFeatureName;
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
    virtual ~PlaceCommand();

    virtual void execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::nonstd::expected<BoundingBox, std::string_view> placeJigsaw(
        std::string const&,
        std::string const&,
        schar,
        ::BlockPos const&,
        bool,
        bool,
        ::Dimension&,
        ::br::worldgen::LiquidSettings
    );

    MCNAPI static ::nonstd::expected<BoundingBox, std::string_view> placeStructure(
        std::string const&,
        ::BlockPos const&,
        ::Dimension&,
        bool,
        bool,
        bool,
        ::br::worldgen::LiquidSettings
    );

    MCNAPI static void
    setup(::CommandRegistry&, std::unordered_map<HashedString, BiomeDecorationFeature> const&, ::Experiments const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::CommandOrigin const&, ::CommandOutput&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/v1_26_20/block/GeometryComponent.h"
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"
#include "mc/world/level/block/components/BlockRendererDescription.h"
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class CerealSchemaUpgradeSet;
class CompoundTag;
class SemVersion;
namespace SharedTypes::Legacy { struct ExpressionNode; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockGeometryDescription : public ::NetworkedBlockComponentDescription<BlockGeometryDescription> {
public:
    // BlockGeometryDescription inner types declare
    // clang-format off
    struct SharedInitializationData;
    // clang-format on

    // BlockGeometryDescription inner types define
    struct SharedInitializationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 40, ::HashedString>                        mCullingName;
        ::ll::TypedStorage<8, 24, std::map<std::string, ExpressionNode>> mBoneVisibilities;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, ::HashedString> mGeometryName;
    ::ll::TypedStorage<1, 1, bool> mNeedsLegacyTopRotation;
    ::ll::TypedStorage<1, 1, bool> mUseBlockTypeLightAbsorption;
    ::ll::TypedStorage<1, 1, bool> mIgnoreGeometryForIsSolid;
    ::ll::TypedStorage<1, 1, bool> mIsFullBlockV1;
    ::ll::TypedStorage<8, 40, ::HashedString> mCullingLayer;
    ::ll::TypedStorage<8, 40, ::HashedString> mCullingShapeName;
    ::ll::TypedStorage<8, 16, std::shared_ptr<BlockGeometryDescription::SharedInitializationData>> mSharedInitializationData;
    ::ll::TypedStorage<8, 32, std::variant<bool, std::set<HashedString>>> mUVsLocked;
    ::ll::TypedStorage<4, 52, ::BlockRendererDescription> mRenderer;
    ::ll::UntypedStorage<8, 16> mNWayVisualRotation;
    // clang-format on
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockGeometryDescription();

    virtual std::string const& getName() const;

    virtual void initializeComponent(::BlockComponentStorage&) const;

    virtual void initializeComponent(::BlockComponentDescription::InitializationContext&) const;

    virtual void initializeComponentFromCode(::BlockComponentStorage&) const;

    virtual void initializeComponentFromCode(::BlockComponentDescription::InitializationContext&) const;

    virtual void handleVersionBasedInitialization(::SemVersion const&);

    virtual ::CompoundTag buildUnboundDataNetworkTag() const;

    virtual void initializeUnboundDataFromNetwork(::CompoundTag const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockGeometryDescription(::BlockGeometryDescription const&);

    MCNAPI BlockGeometryDescription(
        ::HashedString const&,
        ::HashedString const&,
        ::HashedString const&,
        ::HashedString const&,
        std::variant<bool, std::set<HashedString>> const&,
        ::BlockRendererDescription const&,
        bool
    );

    MCNAPI ::BlockGeometryDescription& operator=(::BlockGeometryDescription const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);

    MCNAPI static std::map<std::string, SharedTypes::Legacy::ExpressionNode>
    getBoneVisibility(std::map<std::string, ExpressionNode> const&);

    MCNAPI static void registerVersionUpgrades(::CerealSchemaUpgradeSet&);

    MCNAPI static std::map<std::string, ExpressionNode>
    setBoneVisibility(std::map<std::string, SharedTypes::Legacy::ExpressionNode> const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& CROSS_GEO_NAME();

    MCNAPI static std::string const& CULLING_LAYER_DOCUMENTATION();

    MCNAPI static ::HashedString const& CULLING_LAYER_LEAVES();

    MCNAPI static std::string const& CULLING_LAYER_NAME_CONSTRAINT();

    MCNAPI static ::HashedString const& CULLING_LAYER_UNDEFINED();

    MCNAPI static ::HashedString const& CULLING_SHAPE_DEFAULT();

    MCNAPI static std::string const& CULLING_SHAPE_DOCUMENTATION();

    MCNAPI static std::string const& CULLING_SHAPE_NAME_CONSTRAINT();

    MCNAPI static ::HashedString const& FULL_BLOCK_GEO_NAME();

    MCNAPI static ::HashedString const& FULL_BLOCK_GEO_NAME_V1();

    MCNAPI static std::string const& GEO_NAME_CONSTRAINT();

    MCNAPI static std::string const& NameID();

    MCNAPI static std::string const& UV_LOCKING_CONSTRAINT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockGeometryDescription const&);

    MCNAPI void* $ctor(
        ::HashedString const&,
        ::HashedString const&,
        ::HashedString const&,
        ::HashedString const&,
        std::variant<bool, std::set<HashedString>> const&,
        ::BlockRendererDescription const&,
        bool
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI std::string const& $getName() const;

    MCNAPI void $initializeComponent(::BlockComponentStorage&) const;

    MCNAPI void $initializeComponent(::BlockComponentDescription::InitializationContext&) const;

    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage&) const;

    MCNAPI void $initializeComponentFromCode(::BlockComponentDescription::InitializationContext&) const;

    MCNAPI void $handleVersionBasedInitialization(::SemVersion const&);

    MCNAPI ::CompoundTag $buildUnboundDataNetworkTag() const;

    MCNAPI void $initializeUnboundDataFromNetwork(::CompoundTag const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

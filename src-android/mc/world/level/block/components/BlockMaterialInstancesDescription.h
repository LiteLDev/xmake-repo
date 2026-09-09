#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/TintMethod.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"
#include "mc/world/level/block/components/BlockMaterialInstance.h"
#include "mc/world/level/block/components/BlockMaterialInstancePackedBools.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class CompoundTag;
class Experiments;
class SemVersion;
class SemVersionConstant;
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockMaterialInstancesDescription : public ::BlockComponentDescription {
public:
    // BlockMaterialInstancesDescription inner types declare
    // clang-format off
    struct BlockMaterialInstanceData;
    struct BlockMaterialData;
    // clang-format on

    // BlockMaterialInstancesDescription inner types define
    struct BlockMaterialInstanceData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                       textureName;
        ::ll::TypedStorage<4, 4, float>                              ambientOcclusion;
        ::ll::TypedStorage<1, 1, ::BlockRenderLayer>                 renderLayer;
        ::ll::TypedStorage<1, 1, ::TintMethod>                       tintMethod;
        ::ll::TypedStorage<1, 1, ::BlockMaterialInstancePackedBools> packedBools;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockMaterialInstanceData& operator=(BlockMaterialInstanceData const&);
        BlockMaterialInstanceData();
    };

    struct BlockMaterialData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                                                    materialName;
        ::ll::TypedStorage<8, 32, ::BlockMaterialInstancesDescription::BlockMaterialInstanceData> materialInstanceData;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockMaterialData& operator=(BlockMaterialData const&);
        BlockMaterialData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~BlockMaterialData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, BlockMaterialInstance>> mMaterials;
    ::ll::TypedStorage<8, 40, std::unordered_map<HashedString, std::string>>           mMaterialMappings;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockMaterialInstancesDescription();

    virtual std::string const& getName() const;

    virtual void initializeComponent(::BlockComponentStorage&) const;

    virtual void initializeComponentFromCode(::BlockComponentStorage&) const;

    virtual bool isNetworkComponent() const;

    virtual std::unique_ptr<CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const&) const;

    virtual void initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);

    virtual void handleVersionBasedInitialization(::SemVersion const&);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockMaterialInstancesDescription(
        std::vector<BlockMaterialInstancesDescription::BlockMaterialData> const&
    );

    MCNAPI BlockMaterialInstancesDescription(
        std::string const&,
        ::BlockRenderLayer const,
        float,
        bool,
        ::TintMethod,
        bool,
        bool,
        bool,
        bool
    );

    MCNAPI bool const isRenderLayerOpaque() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx&);

    MCNAPI static bool postParseConstraint(::Experiments const&, ::Json::Value const&, ::SemVersion const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ulong const& MATERIALS_LIMIT();

    MCNAPI static std::string const& NameID();

    MCNAPI static ::SemVersionConstant const& VARIATIONS_TEXTURE_SUPPORT_MIN_VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::vector<BlockMaterialInstancesDescription::BlockMaterialData> const&);

    MCNAPI void* $ctor(std::string const&, ::BlockRenderLayer const, float, bool, ::TintMethod, bool, bool, bool, bool);
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

    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage&) const;

    MCNAPI bool $isNetworkComponent() const;

    MCNAPI std::unique_ptr<CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const&) const;

    MCNAPI void $initializeFromNetwork(::CompoundTag const&, ::cereal::ReflectionCtx const&);

    MCNAPI void $handleVersionBasedInitialization(::SemVersion const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/world/level/FogDefinition.h"

// auto generated forward declare list
// clang-format off
class FogDefinitionRegistry;
struct FogDefinition;
struct FogDistanceSetting;
struct FogTransitionSetting;
struct ResolvedFogVolumetricCoefficientSetting;
struct ResolvedFogVolumetricDensitySetting;
struct ResolvedFogVolumetricHenyeyGreensteinGSetting;
// clang-format on

class FogManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // FogManager inner types declare
    // clang-format off
    struct Layer;
    // clang-format on

    // FogManager inner types define
    enum LayerType : uint {
        DATA_DEFAULT    = 0,
        BIOME           = 1,
        VOLUME          = 2,
        SERVER_DIRECTED = 3,
    };

    struct Layer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::FogManager::LayerType> mType;
        ::ll::UntypedStorage<8, 24>                       mDefinitions;
        ::ll::TypedStorage<4, 4, int>                     mPriority;
        // NOLINTEND

    public:
        // prevent constructor by default
        Layer& operator=(Layer const&);
        Layer(Layer const&);
        Layer();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Layer();
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
    ::ll::TypedStorage<8, 24, std::vector<FogManager::Layer>>             mFogLayers;
    ::ll::TypedStorage<8, 8, std::reference_wrapper<const FogDefinition>> mEngineDefault;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FogManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FogManager();

    MCNAPI void _pushLayer(::FogManager::LayerType, std::vector<WeakRef<const FogDefinition>>);

    MCNAPI ::ResolvedFogVolumetricCoefficientSetting
    calculateCurrentCoefficientSetting(::FogDefinition::CoefficientSettingType, float) const;

    MCNAPI ::ResolvedFogVolumetricDensitySetting
    calculateCurrentDensitySetting(::FogDefinition::DensitySettingType, float) const;

    MCNAPI ::FogDistanceSetting calculateCurrentDistanceSetting(::FogDefinition::DistanceSettingType, float) const;

    MCNAPI ::ResolvedFogVolumetricHenyeyGreensteinGSetting
    calculateCurrentHenyeyGreensteinGSetting(::FogDefinition::HenyeyGreensteinGSettingType, float) const;

    MCNAPI ::FogTransitionSetting calculateCurrentTransitionSetting(::FogDefinition::DistanceSettingType, float) const;

    MCNAPI void pushFogDefinitionAverageLayer(::FogManager::LayerType, std::vector<WeakRef<const FogDefinition>>);

    MCNAPI void pushFogDefinitionLayer(::FogManager::LayerType, ::WeakRef<const FogDefinition> const&);

    MCNAPI void removeAllLayersOfType(::FogManager::LayerType);

    MCNAPI void setEngineDefault(::FogDefinition const&);

    MCNAPI void updateServerDirectedLayers(
        std::vector<std::string> const&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<const FogDefinitionRegistry>>
    );
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

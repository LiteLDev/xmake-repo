#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/memory/RingAllocatorContainer.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/external/render_dragon/materials/MaterialUniformAlias.h"
#include "mc/external/render_dragon/materials/MaterialUniformHandles.h"
#include "mc/external/render_dragon/materials/MaterialUniformName.h"
#include "mc/external/render_dragon/materials/SamplerSlot.h"
#include "mc/external/render_dragon/materials/definition/ExternalUniformDeclaration.h"
#include "mc/external/render_dragon/materials/definition/SamplerDefinition.h"
#include "mc/external/render_dragon/materials/definition/StageInputMap.h"
#include "mc/external/render_dragon/platform/GraphicsPlatform.h"
#include "mc/external/render_dragon/resources/ResolvedTextureResource.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
namespace Core { template<int T0, bool T1> class CheckedRingBuffer; }
namespace dragon { class ResolvedMaterialResource; }
namespace dragon::materials { class CompiledMaterialDefinition; }
namespace dragon::materials { class Pass; }
namespace dragon::materials { struct MaterialUniformMap; }
namespace dragon::materials { struct PassProgramHandle; }
namespace dragon::materials::definition { template<typename T0, typename T1> class PropertyField; }
// clang-format on

namespace dragon::materials {

class Material {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::UntypedStorage<8, 24> mCSSTextures;
    ::ll::TypedStorage<4, 4, uint const> mId;
    ::ll::TypedStorage<8, 216, ::dragon::platform::GraphicsPlatform const> mPlatform;
    ::ll::TypedStorage<8, 24, std::string> mName;
    ::ll::TypedStorage<8, 32, std::optional<std::string>> mParentName;
    ::ll::TypedStorage<8, 8, std::unique_ptr<dragon::materials::MaterialUniformMap>> mDefaultUniforms;
    ::ll::UntypedStorage<8, 320> mDefaultUniformsData;
    ::ll::TypedStorage<8, 24, ::dragon::materials::MaterialUniformHandles> mUniformHandles;
    ::ll::TypedStorage<8, 40, ::dragon::materials::definition::StageInputMap> mCombinedVertexInputDesc;
    ::ll::TypedStorage<8, 24, std::vector<std::string>> mPassNames;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string> const> mGlobalFlags;
    ::ll::TypedStorage<8, 16, std::shared_ptr<const dragon::materials::CompiledMaterialDefinition>> mSharedMaterialDefinition;
    ::ll::UntypedStorage<8, 48> mPasses;
    ::ll::UntypedStorage<8, 40> mProperties;
    ::ll::TypedStorage<8, 40, std::unordered_map<dragon::materials::MaterialUniformName, dragon::materials::MaterialUniformAlias>> mPropertyNameToAlias;
    ::ll::TypedStorage<8, 40, std::unordered_map<dragon::materials::MaterialUniformAlias, std::vector<dragon::materials::MaterialUniformName>>> mPropertyAliasToName;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, dragon::materials::definition::SamplerDefinition>> mIndexedSamplers;
    ::ll::TypedStorage<8, 72, std::array<std::vector<std::optional<dragon::materials::SamplerSlot>>, 3>> mSamplerSlots;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    Material();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Material(
        ::dragon::materials::CompiledMaterialDefinition const&,
        std::unordered_map<std::string, std::string> const&,
        std::optional<dragon::platform::GraphicsPlatform> const
    );

    MCNAPI void _loadMaterial(::dragon::materials::CompiledMaterialDefinition const&);

    MCNAPI ::dragon::materials::Pass const* tryGetPass(::HashedString const&) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::atomic<uint>& sNextId();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::dragon::materials::CompiledMaterialDefinition const&,
        std::unordered_map<std::string, std::string> const&,
        std::optional<dragon::platform::GraphicsPlatform> const
    );
    // NOLINTEND
};

} // namespace dragon::materials

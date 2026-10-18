#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/external/render_dragon/materials/CompiledMaterialDefinition.h"
#include "mc/external/render_dragon/materials/PassProgram.h"
#include "mc/external/render_dragon/materials/PassProgramHandle.h"
#include "mc/external/render_dragon/materials/definition/BlendMode.h"
#include "mc/external/render_dragon/materials/definition/ShaderCodePlatform.h"
#include "mc/external/render_dragon/materials/definition/StageInputMap.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::materials {

#if defined(LL_PLAT_A) // @header-generator platform
class Pass {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint const>                                           mMaterialId;
    ::ll::TypedStorage<8, 40, ::HashedString const>                                mName;
    ::ll::UntypedStorage<8, 128>                                                   mVariantSet;
    ::ll::TypedStorage<8, 40, ::dragon::materials::definition::StageInputMap>      mCombinedVertexInputDesc;
    ::ll::TypedStorage<8, 24, std::optional<dragon::materials::PassProgramHandle>> mDefaultProgram;
    ::ll::UntypedStorage<8, 40>                                                    mPrograms;
    // NOLINTEND

public:
    // prevent constructor by default
    Pass& operator=(Pass const&);
    Pass();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::optional<dragon::materials::PassProgramHandle> const tryResolveProgram() const;

    MCNAPI std::optional<dragon::materials::PassProgramHandle> const
           tryResolveProgram(std::unordered_map<std::string, std::string> const&) const;
    // NOLINTEND
};
#else // @header-generator platform
class Pass {};
#endif // @header-generator platform

} // namespace dragon::materials

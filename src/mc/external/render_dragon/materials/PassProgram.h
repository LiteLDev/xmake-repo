#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/materials/CompiledMaterialDefinition.h"
#include "mc/external/render_dragon/materials/PassProgramType.h"
#include "mc/external/render_dragon/materials/definition/ShaderCodePlatform.h"
#include "mc/external/render_dragon/materials/definition/StageInputMap.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::materials {

#if defined(LL_PLAT_A) // @header-generator platform
class PassProgram {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::dragon::materials::PassProgramType>            mType;
    ::ll::TypedStorage<2, 4, std::optional<ushort>>                           mProgram;
    ::ll::TypedStorage<8, 40, ::dragon::materials::definition::StageInputMap> mVertexInputDesc;
    ::ll::TypedStorage<1, 1, bool>                                            mHasVertexStage;
    // NOLINTEND

public:
    // prevent constructor by default
    PassProgram& operator=(PassProgram const&);
    PassProgram();
};
#else // @header-generator platform
class PassProgram {};
#endif // @header-generator platform

} // namespace dragon::materials

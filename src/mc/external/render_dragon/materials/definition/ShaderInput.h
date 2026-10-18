#pragma once

#include "mc/_HeaderOutputPredefine.h"

#if defined(LL_PLAT_A) // @header-generator platform
// auto generated inclusion list
#include "mc/external/render_dragon/materials/definition/InterpolationConstraint.h"
#include "mc/external/render_dragon/materials/definition/PrecisionConstraint.h"
#include "mc/external/render_dragon/materials/definition/SemanticDescription.h"
#include "mc/external/render_dragon/materials/definition/ShaderInputType.h"

#else // @header-generator platform
#endif // @header-generator platform
namespace dragon::materials::definition {

#if defined(LL_PLAT_A) // @header-generator platform
struct ShaderInput {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<4, 4, ::dragon::materials::definition::ShaderInputType> mType;
    ::ll::TypedStorage<1, 1, bool> mIsPerInstance;
    ::ll::TypedStorage<1, 2, ::dragon::materials::definition::SemanticDescription> mSemantic;
    ::ll::TypedStorage<1, 2, std::optional<dragon::materials::definition::PrecisionConstraint>> mPrecisionConstraint;
    ::ll::TypedStorage<1, 2, std::optional<dragon::materials::definition::InterpolationConstraint>> mInterpolationConstraint;
    ::ll::TypedStorage<1, 1, bool> mInjectable;
    // clang-format on
    // NOLINTEND
};
#else // @header-generator platform
struct ShaderInput {};
#endif // @header-generator platform

} // namespace dragon::materials::definition

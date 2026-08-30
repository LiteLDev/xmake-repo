#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/materials/definition/PrecisionConstraint.h"
#include "mc/external/render_dragon/materials/definition/ShaderInputType.h"

namespace dragon::materials::definition {

struct CustomTypeDeclaration {
public:
    // CustomTypeDeclaration inner types declare
    // clang-format off
    struct MemberType;
    // clang-format on

    // CustomTypeDeclaration inner types define
    struct MemberType {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                                                      name;
        ::ll::TypedStorage<4, 4, ::dragon::materials::definition::ShaderInputType>                  type;
        ::ll::TypedStorage<4, 4, uint>                                                              arraySize;
        ::ll::TypedStorage<1, 2, std::optional<dragon::materials::definition::PrecisionConstraint>> precision;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::string>                                                                   mName;
    ::ll::TypedStorage<8, 24, std::vector<dragon::materials::definition::CustomTypeDeclaration::MemberType>> mMembers;
    ::ll::TypedStorage<4, 4, uint>                                                                           mStride;
    // NOLINTEND
};

} // namespace dragon::materials::definition

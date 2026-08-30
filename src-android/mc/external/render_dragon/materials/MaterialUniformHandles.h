#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/materials/UniformType.h"

// auto generated forward declare list
// clang-format off
namespace dragon::materials { class MaterialUniform; }
// clang-format on

namespace dragon::materials {

class MaterialUniformHandles {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<std::unique_ptr<dragon::materials::MaterialUniform>>> mUniforms;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialUniformHandles& operator=(MaterialUniformHandles const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::dragon::materials::MaterialUniform const&
    create(std::string const&, ::dragon::materials::UniformType, ushort);

    MCNAPI ::dragon::materials::MaterialUniform const* tryGet(std::string const&) const;

    MCNAPI ~MaterialUniformHandles();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dragon::materials

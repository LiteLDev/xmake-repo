#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/enums/TextureWrapping.h"

namespace mce {

struct TextureWrappingDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::mce::TextureWrapping> uAddress;
    ::ll::TypedStorage<1, 1, ::mce::TextureWrapping> vAddress;
    ::ll::TypedStorage<1, 1, ::mce::TextureWrapping> wAddress;
    // NOLINTEND

public:
    // prevent constructor by default
    TextureWrappingDescription();
};

} // namespace mce

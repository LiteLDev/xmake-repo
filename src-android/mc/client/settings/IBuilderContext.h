#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContentItemCollection;
// clang-format on

namespace Settings::RegistryBuilder {

class IBuilderContext {
public:
    // IBuilderContext inner types define
    using OnReload = std::function<void(ContentItemCollection&)>;
};

} // namespace Settings::RegistryBuilder

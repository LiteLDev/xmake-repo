#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ListTag;
class SaveContext;
struct FullContainerName;
// clang-format on

class IDynamicContainerSerialization {
public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual std::unique_ptr<ListTag> serializeContainerContent(::FullContainerName const&, ::SaveContext const&) = 0;

    virtual ~IDynamicContainerSerialization() = default;

    virtual std::optional<int> getDynamicContainerWeight(::FullContainerName const&) = 0;

    virtual bool hasContainer(::FullContainerName const&) const = 0;
    // clang-format on
    // NOLINTEND
};

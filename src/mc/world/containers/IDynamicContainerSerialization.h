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
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual std::unique_ptr<ListTag> serializeContainerContent(::FullContainerName const&, ::SaveContext const&) = 0;
#else // @header-generator platform
    virtual ::std::unique_ptr<::ListTag>
    serializeContainerContent(::FullContainerName const& name, ::SaveContext const& saveContext) = 0;

    virtual ::std::optional<int> getDynamicContainerWeight(::FullContainerName const& name) = 0;

    virtual bool hasContainer(::FullContainerName const& name) const = 0;
#endif // @header-generator platform

    virtual ~IDynamicContainerSerialization() = default;
#if defined(LL_PLAT_A) // @header-generator platform

    virtual std::optional<int> getDynamicContainerWeight(::FullContainerName const&) = 0;

    virtual bool hasContainer(::FullContainerName const&) const = 0;
    // clang-format on
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND
};

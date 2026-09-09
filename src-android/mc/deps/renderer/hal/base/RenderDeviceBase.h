#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/enums/RenderFeature.h"
#include "mc/deps/renderer/hal/interface/Attribute.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
namespace mce { class SampleDescription; }
// clang-format on

namespace mce {

class RenderDeviceBase {
public:
    // RenderDeviceBase inner types declare
    // clang-format off
    struct AttributeList;
    // clang-format on

    // RenderDeviceBase inner types define
    struct AttributeList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::vector<mce::Attribute>> attributeList;
        // NOLINTEND
    };

    using attributeList_t = std::vector<mce::Attribute>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, std::vector<mce::RenderDeviceBase::AttributeList>> registeredAttributeLists;
    ::ll::TypedStorage<8, 8, std::unique_ptr<mce::RenderContext>>                immediateContext;
    ::ll::TypedStorage<1, 1, bool>                                               mDeviceLost;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderDeviceBase& operator=(RenderDeviceBase const&);
    RenderDeviceBase(RenderDeviceBase const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderDeviceBase();

    MCNAPI ::mce::SampleDescription getClosestSupportedSampleDescription(
        std::vector<mce::SampleDescription> const&,
        ::mce::SampleDescription const&
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace mce

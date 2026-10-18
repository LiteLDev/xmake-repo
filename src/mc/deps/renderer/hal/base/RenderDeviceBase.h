#pragma once

#include "mc/_HeaderOutputPredefine.h"
#if defined(LL_PLAT_A) // @header-generator platform

// auto generated inclusion list
#include "mc/deps/renderer/hal/enums/RenderFeature.h"
#include "mc/deps/renderer/hal/interface/Attribute.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderContext; }
namespace mce { class SampleDescription; }
// clang-format on
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform

// auto generated forward declare list
// clang-format off
namespace mce { class Attribute; }
// clang-format on
#else // @header-generator platform
#endif // @header-generator platform
#endif // @header-generator platform

namespace mce {

class RenderDeviceBase {
public:
    // RenderDeviceBase inner types declare
    // clang-format off
    struct AttributeList;
    // clang-format on

    // RenderDeviceBase inner types define
#if defined(LL_PLAT_A) // @header-generator platform
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
#else // @header-generator platform
#if defined(LL_PLAT_C) // @header-generator platform
    struct AttributeList {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk8fc1cf;
        // NOLINTEND

    public:
        // prevent constructor by default
        AttributeList& operator=(AttributeList const&);
        AttributeList(AttributeList const&);
        AttributeList();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8d1908;
    ::ll::UntypedStorage<8, 8>  mUnk59cd37;
    ::ll::UntypedStorage<1, 1>  mUnke4e578;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderDeviceBase& operator=(RenderDeviceBase const&);
    RenderDeviceBase(RenderDeviceBase const&);
    RenderDeviceBase();
#else // @header-generator platform
    struct AttributeList {};
#endif // @header-generator platform
#endif // @header-generator platform
};

} // namespace mce

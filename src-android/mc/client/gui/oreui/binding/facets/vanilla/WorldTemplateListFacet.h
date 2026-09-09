#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class WorldTemplateManager;
struct WorldTemplateInfo;
namespace OreUI { class IResourceAllowList; }
// clang-format on

namespace OreUI {

class WorldTemplateListFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::WorldTemplateListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 8, std::chrono::time_point<std::chrono::steady_clock, std::chrono::duration<long long, std::ratio<1, 1000000000>>>> mLastUpdate;
    ::ll::UntypedStorage<8, 24> mWorldTemplateManager;
    ::ll::UntypedStorage<8, 24> mResourceAllowList;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldTemplateListFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldTemplateListFacet(
        ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );

    MCNAPI std::vector<std::unique_ptr<const WorldTemplateInfo>> const& getTemplates() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[26]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::gsl::not_null<Bedrock::NonOwnerPointer<WorldTemplateManager>>,
        ::gsl::not_null<Bedrock::NonOwnerPointer<OreUI::IResourceAllowList>>
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI

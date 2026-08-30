#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/client/realms/UploadToRealmsError.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsList; }
namespace Realms { class RealmsUploader; }
// clang-format on

namespace OreUI {

class RealmWorldUploaderFacet_v2 : public ::OreUI::FacetBase_DEPRECATED<OreUI::RealmWorldUploaderFacet_v2> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16>                                        mUploadRealmWorldTask;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsUploader>> mRealmsUploader;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Realms::RealmsList>>     mRealmsList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>         mRealmsListSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmWorldUploaderFacet_v2();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmWorldUploaderFacet_v2();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RealmWorldUploaderFacet_v2(std::shared_ptr<Realms::RealmsUploader>, std::shared_ptr<Realms::RealmsList>);

    MCNAPI void clearUploadWorldToRealmTaskState();

    MCNAPI std::optional<Realms::UploadToRealmsError> const& getUploadWorldToRealmError() const;

    MCNAPI ::OreUI::FacetTaskState getUploadWorldToRealmTaskState() const;

    MCNAPI void uploadWorldToRealm(std::string const&, std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[35]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(std::shared_ptr<Realms::RealmsUploader>, std::shared_ptr<Realms::RealmsList>);
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

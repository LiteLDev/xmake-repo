#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/interface/FacetAvailability.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/identity/XUID.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Social { class IUserManager; }
namespace Social { class XboxLiveUserStatistics; }
// clang-format on

namespace OreUI {

class PlayerStatisticsFacet : public ::OreUI::FacetBase_DEPRECATED<OreUI::PlayerStatisticsFacet> {
public:
    // PlayerStatisticsFacet inner types declare
    // clang-format off
    struct Statistic;
    // clang-format on

    // PlayerStatisticsFacet inner types define
    enum StatisticIcon : uint {
        Clock   = 0,
        Boots   = 1,
        Pickaxe = 2,
        Sword   = 3,
    };

    struct Statistic {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, std::string>                                  name;
        ::ll::TypedStorage<8, 24, std::string>                                  label;
        ::ll::TypedStorage<4, 4, ::OreUI::PlayerStatisticsFacet::StatisticIcon> icon;
        ::ll::TypedStorage<8, 8, double>                                        valueRaw;
        ::ll::TypedStorage<8, 24, std::string>                                  valueDisplay;
        ::ll::TypedStorage<8, 24, std::string>                                  valueNarration;
        ::ll::TypedStorage<8, 8, double>                                        currentUserValueRaw;
        ::ll::TypedStorage<8, 24, std::string>                                  currentUserValueDisplay;
        ::ll::TypedStorage<8, 24, std::string>                                  currentUserValueNarration;
        // NOLINTEND

    public:
        // prevent constructor by default
        Statistic& operator=(Statistic const&);
        Statistic();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Statistic(::OreUI::PlayerStatisticsFacet::Statistic const&);

        MCNAPI ~Statistic();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::OreUI::PlayerStatisticsFacet::Statistic const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, OreUI::PlayerStatisticsFacet::StatisticIcon>> mStatisticIconMap;
    ::ll::TypedStorage<1, 1, bool> mLoaded;
    ::ll::TypedStorage<8, 16, std::optional<Social::XUID>> mXuid;
    ::ll::TypedStorage<8, 24, std::vector<OreUI::PlayerStatisticsFacet::Statistic>> mData;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Social::XboxLiveUserStatistics>> mStatistics;
    ::ll::UntypedStorage<8, 24> mUserManager;
    ::ll::TypedStorage<1, 1, bool> mDirty;
    ::ll::TypedStorage<4, 4, int> mLoadedUserStatisticsUpdateToken;
    ::ll::TypedStorage<4, 4, int> mCurrentUserStatisticsUpdateToken;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerStatisticsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerStatisticsFacet();

    virtual bool update();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PlayerStatisticsFacet(::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const);

    MCNAPI std::vector<OreUI::PlayerStatisticsFacet::Statistic> const& getData();

    MCNAPI bool getLoaded();

    MCNAPI void load(std::string const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::OreUI::FacetAvailability const& AVAILABILITY();

    MCNAPI static ::std::add_lvalue_reference_t<char const[25]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::gsl::not_null<Bedrock::NonOwnerPointer<Social::IUserManager>> const);
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

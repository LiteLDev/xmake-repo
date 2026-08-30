#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/catalog/ThirdPartyServerGame.h"
#include "mc/network/ExperiencePromotion.h"

// auto generated forward declare list
// clang-format off
class CustomDocumentModifier;
namespace Json { class Value; }
// clang-format on

struct ThirdPartyServerCustom {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                 mRequireXBL;
    ::ll::TypedStorage<2, 2, ushort>                               mPort;
    ::ll::TypedStorage<4, 4, int>                                  mRank;
    ::ll::TypedStorage<8, 24, std::string>                         mCreatorName;
    ::ll::TypedStorage<8, 24, std::string>                         mUrl;
    ::ll::TypedStorage<8, 24, std::string>                         mAllowListUrl;
    ::ll::TypedStorage<8, 24, std::string>                         mNews;
    ::ll::TypedStorage<8, 24, std::string>                         mNewsTitle;
    ::ll::TypedStorage<8, 24, std::string>                         mStorePageId;
    ::ll::TypedStorage<8, 24, std::string>                         mExperienceId;
    ::ll::TypedStorage<8, 24, std::vector<ThirdPartyServerGame>>   mAvailableGames;
    ::ll::TypedStorage<8, 192, std::optional<ExperiencePromotion>> mPromotion;
    // NOLINTEND

public:
    // prevent constructor by default
    ThirdPartyServerCustom& operator=(ThirdPartyServerCustom const&);
    ThirdPartyServerCustom(ThirdPartyServerCustom const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void fromJson(::Json::Value const&, bool, ::CustomDocumentModifier*);

    MCNAPI ~ThirdPartyServerCustom();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

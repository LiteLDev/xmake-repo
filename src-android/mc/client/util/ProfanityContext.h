#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/string/util/string_hash.h"
#include "mc/util/ProfanityFilterContext.h"

// auto generated forward declare list
// clang-format off
class IOptionRegistry;
class Option;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Social { class IUserManager; }
namespace Social { class User; }
// clang-format on

class ProfanityContext : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<1, 1, bool> mLocalEnabled;
    ::ll::TypedStorage<1, 1, bool> mRemoteEnabled;
    ::ll::TypedStorage<1, 1, bool> mPlayerEnabled;
    ::ll::TypedStorage<4, 4, ::ProfanityFilterContext> mFilterMask;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, int, Util::string_hash, std::equal_to<void>, std::allocator<std::pair<const std::string, int>>>> mProfanityExactMap;
    ::ll::TypedStorage<8, 40, std::unordered_set<std::string, Util::string_hash, std::equal_to<void>, std::allocator<std::string>>> mProfanityContainsSet;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLocalFilterObserver;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRemoteFilterObserver;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mPlayerFilterObserver;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mCanModifyFilterToggleObserver;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mXboxLiveSignInObserver;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mXboxLiveSignOutObserver;
    ::ll::UntypedStorage<8, 88> mToggleChangedPublisher;
    ::ll::TypedStorage<4, 4, ::BuildPlatform> mBuildPlatform;
    // clang-format on
    // NOLINTEND

public:
    // prevent constructor by default
    ProfanityContext();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProfanityContext();

    virtual void handleLocalFilterToggle(bool);

    virtual void handleRemoteFilterToggle(bool);

    virtual void handlePlayerFilterToggle(bool);

    virtual std::string _doMaskProfanity(std::string const&) const;

    virtual bool _doFindProfanity(std::string const&) const;

    virtual void _fireEventProfanityFilter() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI std::string filterProfanityFromString(::ProfanityFilterContext const, std::string const&, bool const) const;

    MCNAPI bool findProfanity(::ProfanityFilterContext const, std::string const&) const;

    MCNAPI bool isFilterActive(::ProfanityFilterContext const) const;

    MCNAPI bool isLocalFilterEnabled() const;

    MCNAPI bool isPlayerProfanityFilterEnabled() const;

    MCNAPI bool isRemoteFilterEnabled() const;

    MCNAPI void setFilterMask(::ProfanityFilterContext const);

    MCNAPI ::Bedrock::PubSub::Subscription subscribeToProfanityToggleEvent(std::function<void(bool, bool)>);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static std::unique_ptr<ProfanityContext> createProfanityContextFromFile(std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $handleLocalFilterToggle(bool);

    MCNAPI void $handleRemoteFilterToggle(bool);

    MCNAPI void $handlePlayerFilterToggle(bool);

    MCNAPI std::string $_doMaskProfanity(std::string const&) const;

    MCNAPI bool $_doFindProfanity(std::string const&) const;

    MCNAPI void $_fireEventProfanityFilter() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

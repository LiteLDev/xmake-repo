#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#include "mc/platform/UUID.h"
#include "mc/resources/PackSettingValueAndDefault.h"

// auto generated forward declare list
// clang-format off
class PackInstance;
namespace Bedrock::PubSub { class Subscription; }
// clang-format on

class ScriptPackSettingsCache {
public:
    // ScriptPackSettingsCache inner types declare
    // clang-format off
    struct CachedSettingsByPackId;
    // clang-format on

    // ScriptPackSettingsCache inner types define
    struct CachedSettingsByPackId {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::mce::UUID>                                                 mPackId;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, PackSettingValueAndDefault>> mValues;
        ::ll::UntypedStorage<8, 88>                                                            mOnChangePublisher;
        // NOLINTEND

    public:
        // prevent constructor by default
        CachedSettingsByPackId();
    };

    using OnChangeCb = std::function<void(const std::string&, const std::variant<float, bool, std::string>&)>;

public:
    // member variables
    // NOLINTBEGIN
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ScriptPackSettingsCache::CachedSettingsByPackId>>> mCachedSettingsByPackId;
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPackSettingsCache();

    MCNAPI explicit ScriptPackSettingsCache(std::vector<PackInstance> const&);

    MCNAPI void _initFromPackStack(std::vector<PackInstance> const&);

    MCNAPI std::unordered_map<std::string, PackSettingValueAndDefault> const*
           getPackSettingsNameValueMap(::mce::UUID) const;

    MCNAPI ::Bedrock::PubSub::Subscription registerObserver(
        ::mce::UUID,
        std::function<void(const std::string&, const std::variant<float, bool, std::string>&)>
    );

    MCNAPI void updatePackSetting(::mce::UUID, std::string const&, std::variant<float, bool, std::string> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(std::vector<PackInstance> const&);
    // NOLINTEND
};

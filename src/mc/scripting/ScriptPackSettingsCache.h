#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/core/utility/pub_sub/thread_model/MultiThreaded.h"
#include "mc/platform/UUID.h"
#include "mc/resources/PackSettingValueAndDefault.h"
#else // @header-generator platform
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class PackInstance;
namespace Bedrock::PubSub { class Subscription; }
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace mce { class UUID; }
#endif // @header-generator platform
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
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, ::mce::UUID>                                                 mPackId;
        ::ll::TypedStorage<8, 40, std::unordered_map<std::string, PackSettingValueAndDefault>> mValues;
        ::ll::UntypedStorage<8, 88>                                                            mOnChangePublisher;
#else // @header-generator platform
        ::ll::UntypedStorage<8, 16>  mUnk7a2899;
        ::ll::UntypedStorage<8, 64>  mUnkcc5d93;
        ::ll::UntypedStorage<8, 128> mUnkbcb283;
#endif // @header-generator platform
        // NOLINTEND

    public:
        // prevent constructor by default
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
        CachedSettingsByPackId& operator=(CachedSettingsByPackId const&);
        CachedSettingsByPackId(CachedSettingsByPackId const&);
#endif // @header-generator platform
        CachedSettingsByPackId();
    };
#if defined(LL_PLAT_A) // @header-generator platform

    using OnChangeCb = std::function<void(const std::string&, const std::variant<float, bool, std::string>&)>;
#else // @header-generator platform
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ScriptPackSettingsCache::CachedSettingsByPackId>>> mCachedSettingsByPackId;
    // clang-format on
#else // @header-generator platform
    ::ll::UntypedStorage<8, 24> mUnkc2256a;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

public:
    // prevent constructor by default
    ScriptPackSettingsCache& operator=(ScriptPackSettingsCache const&);
    ScriptPackSettingsCache(ScriptPackSettingsCache const&);
    ScriptPackSettingsCache();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ScriptPackSettingsCache();

    MCNAPI explicit ScriptPackSettingsCache(std::vector<PackInstance> const&);

    MCNAPI void _initFromPackStack(std::vector<PackInstance> const&);

    MCNAPI std::unordered_map<std::string, PackSettingValueAndDefault> const*
           getPackSettingsNameValueMap(::mce::UUID) const;
#else // @header-generator platform
    MCNAPI void _initFromPackStack(::std::vector<::PackInstance> const& stack);
#endif // @header-generator platform

    MCNAPI ::Bedrock::PubSub::Subscription registerObserver(
#if defined(LL_PLAT_A) // @header-generator platform
        ::mce::UUID,
        std::function<void(const std::string&, const std::variant<float, bool, std::string>&)>
#else // @header-generator platform
        ::mce::UUID                                                                                    packId,
        ::std::function<void(::std::string const&, ::std::variant<float, bool, ::std::string> const&)> callback
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void updatePackSetting(::mce::UUID, std::string const&, std::variant<float, bool, std::string> const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(std::vector<PackInstance> const&);
#else // @header-generator platform
    MCNAPI void updatePackSetting(
        ::mce::UUID                                       packId,
        ::std::string const&                              name,
        ::std::variant<float, bool, ::std::string> const& value
    );
#endif // @header-generator platform
    // NOLINTEND
};

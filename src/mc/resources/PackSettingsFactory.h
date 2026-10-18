#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ReflectionCtx.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/deps/core/utility/pub_sub/ReturnPolicyType.h"
#include "mc/deps/shared_types/v1_21_100/pack_settings/Document.h"
#else // @header-generator platform
#endif // @header-generator platform
#include "mc/platform/UUID.h"
#include "mc/platform/brstd/basic_cstring_view.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
class PackSettings;
struct PackSettingValueAndDefault;
#if defined(LL_PLAT_A) // @header-generator platform
namespace Bedrock::PubSub { class Subscription; }
#else // @header-generator platform
#endif // @header-generator platform
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace Core { class Path; }
#if defined(LL_PLAT_A) // @header-generator platform
namespace Core { class PathView; }
namespace Puv { template<typename T0, typename T1, typename T2, typename T3> class SlicedLoader; }
#else // @header-generator platform
namespace SharedTypes::v1_21_100::PackSettingsDefinition { struct Document; }
#endif // @header-generator platform
// clang-format on

class PackSettingsFactory {
public:
    // PackSettingsFactory inner types declare
    // clang-format off
    struct Stats;
    // clang-format on

    // PackSettingsFactory inner types define
    struct Stats {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<4, 4, uint> mSaveAttempts;
        ::ll::TypedStorage<4, 4, uint> mLoadAttempts;
        ::ll::TypedStorage<4, 4, uint> mGlobalSaveAttempts;
        ::ll::TypedStorage<4, 4, uint> mGlobalLoadAttempts;
#else // @header-generator platform
        ::ll::UntypedStorage<4, 4> mUnkb937a5;
        ::ll::UntypedStorage<4, 4> mUnk914b4a;
        ::ll::UntypedStorage<4, 4> mUnk458fcb;
        ::ll::UntypedStorage<4, 4> mUnk3d0772;
#endif // @header-generator platform
        // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

    public:
        // prevent constructor by default
        Stats& operator=(Stats const&);
        Stats(Stats const&);
        Stats();
#endif // @header-generator platform
    };

#if defined(LL_PLAT_A) // @header-generator platform
    using PackIdToSettingsMap = std::unordered_map<mce::UUID, std::unique_ptr<PackSettings>>;
#else // @header-generator platform
    using PackIdToSettingsMap = ::std::unordered_map<::mce::UUID, ::std::unique_ptr<::PackSettings>>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    ::ll::TypedStorage<8, 8, ulong const> mMaxGlobalPackSettingEntriesPerFile;
    ::ll::UntypedStorage<8, 24> mGlobalPackSettingsPath;
    ::ll::TypedStorage<4, 16, ::PackSettingsFactory::Stats> mStats;
    ::ll::UntypedStorage<8, 120> mReflectionCtx;
    ::ll::UntypedStorage<8, 240> mLoader;
    ::ll::TypedStorage<8, 16, std::shared_ptr<Bedrock::PubSub::Publisher<void (const mce::UUID&, const std::string&, const std::variant<float, bool, std::string>&), Bedrock::PubSub::ThreadModel::MultiThreaded, (Bedrock::PubSub::ReturnPolicyType)0>>> mOnChangePublisher;
    ::ll::TypedStorage<8, 8, std::unique_ptr<std::unordered_map<mce::UUID, std::unique_ptr<PackSettings>>>> mGlobalPackSettings;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unordered_map<mce::UUID, std::unique_ptr<PackSettings>>>> mWorldPackSettings;
    ::ll::TypedStorage<8, 8, std::unique_ptr<SharedTypes::v1_21_100::PackSettingsDefinition::Document>> mGlobalUserOverrides;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::unique_ptr<SharedTypes::v1_21_100::PackSettingsDefinition::Document>>> mPerWorldUserOverrides;
    // clang-format on
#else // @header-generator platform
    ::ll::TypedStorage<8, 8, uint64 const>                       mMaxGlobalPackSettingEntriesPerFile;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mGlobalPackSettingsPath;
    ::ll::TypedStorage<4, 16, ::PackSettingsFactory::Stats>      mStats;
    ::ll::TypedStorage<8, 128, ::cereal::ReflectionCtx>          mReflectionCtx;
    ::ll::TypedStorage<
        8,
        256,
        ::Puv::SlicedLoader<
            ::SharedTypes::v1_21_100::PackSettingsDefinition::Document,
            nullptr_t,
            nullptr_t,
            ::SharedTypes::v1_21_100::PackSettingsDefinition::Document>>
        mLoader;
    ::ll::TypedStorage<
        8,
        16,
        ::std::shared_ptr<::Bedrock::PubSub::Publisher<
            void(::mce::UUID const&, ::std::string const&, ::std::variant<float, bool, ::std::string> const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>>
        mOnChangePublisher;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::std::unordered_map<
            ::mce::UUID,
            ::std::unique_ptr<::PackSettings, ::std::default_delete<::PackSettings>>>>>
        mGlobalPackSettings;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::std::string, ::std::unordered_map<::mce::UUID, ::std::unique_ptr<::PackSettings>>>>
        mWorldPackSettings;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SharedTypes::v1_21_100::PackSettingsDefinition::Document>>
        mGlobalUserOverrides;
    ::ll::TypedStorage<
        8,
        64,
        ::std::
            unordered_map<::std::string, ::std::unique_ptr<::SharedTypes::v1_21_100::PackSettingsDefinition::Document>>>
        mPerWorldUserOverrides;
#endif // @header-generator platform
    // NOLINTEND
#if defined(LL_PLAT_A) // @header-generator platform

public:
    // prevent constructor by default
    PackSettingsFactory();
#else // @header-generator platform
#endif // @header-generator platform

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    virtual ~PackSettingsFactory();
#else // @header-generator platform
    virtual ~PackSettingsFactory() = default;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ulong getAccessTimestamp() const;
#else // @header-generator platform
    virtual uint64 getAccessTimestamp() const;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackSettings* _getGlobalPackSettings(::PackManifest const&);
#else // @header-generator platform
    MCAPI ::PackSettings* _getGlobalPackSettings(::PackManifest const& manifest);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackSettings* _getWorldPackSettings(::PackManifest const&, std::optional<std::string>);
#else // @header-generator platform
    MCAPI ::PackSettings* _getWorldPackSettings(::PackManifest const& manifest, ::std::optional<::std::string> worldId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unique_ptr<SharedTypes::v1_21_100::PackSettingsDefinition::Document>
           _loadUserOverridesFromFile(::Core::Path const&) const;
#else // @header-generator platform
    MCAPI ::std::unique_ptr<::SharedTypes::v1_21_100::PackSettingsDefinition::Document>
    _loadUserOverridesFromFile(::Core::Path const& path) const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool
    _saveUserOverridesToFile(::SharedTypes::v1_21_100::PackSettingsDefinition::Document, ::Core::Path const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool _saveUserOverridesToFile(
        ::SharedTypes::v1_21_100::PackSettingsDefinition::Document doc,
        ::Core::Path const&                                        path
    ) const;

    MCAPI void _syncPackSettingsToSaveDoc(
        ::mce::UUID                                                 packId,
        ::PackSettings const&                                       packSettings,
        ::SharedTypes::v1_21_100::PackSettingsDefinition::Document& userOverrides,
        bool                                                        includeTimestamp
    ) const;
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _syncPackSettingsToSaveDoc(
        ::mce::UUID,
        ::PackSettings const&,
        ::SharedTypes::v1_21_100::PackSettingsDefinition::Document&,
        bool
    ) const;
#else // @header-generator platform
    MCAPI ::PackSettings* getPackSettings(::PackManifest const& manifest, ::std::optional<::std::string> worldId);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::PackSettings* getPackSettings(::PackManifest const&, std::optional<std::string>);
#else // @header-generator platform
    MCAPI bool loadPerWorldUserOverrides(::std::string const& worldId, ::Core::Path const& worldPath);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool loadPerWorldUserOverrides(std::string const&, ::Core::Path const&);

    MCNAPI ::Bedrock::PubSub::Subscription registerObserver(
        std::function<void(const mce::UUID&, const std::string&, const std::variant<float, bool, std::string>&)>
    );

    MCNAPI bool saveGlobalUserOverrides();

    MCNAPI bool savePerWorldUserOverrides(std::string const&, ::Core::Path const&);

    MCNAPI std::string
           serializePackSettingsNameValueMap(std::unordered_map<std::string, PackSettingValueAndDefault> const&) const;
#else // @header-generator platform
#ifdef LL_PLAT_C
    MCAPI bool saveGlobalUserOverrides();

    MCAPI bool savePerWorldUserOverrides(::std::string const& worldId, ::Core::Path const& worldPath);

    MCAPI ::std::string serializePackSettingsNameValueMap(
        ::std::unordered_map<::std::string, ::PackSettingValueAndDefault> const& packSettingsNameValueMap
    ) const;
#endif
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const&
#else // @header-generator platform
    MCAPI static ::brstd::basic_cstring_view<char, ::std::char_traits<char>> const&
#endif // @header-generator platform
    GLOBAL_RESOURCE_PACK_SETTINGS_FILENAME();

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static ::brstd::basic_cstring_view<char, std::char_traits<char>> const&
#else // @header-generator platform
    MCAPI static ::brstd::basic_cstring_view<char, ::std::char_traits<char>> const&
#endif // @header-generator platform
    WORLD_BEHAVIOR_PACK_SETTINGS_FILENAME();
#if defined(LL_PLAT_A) // @header-generator platform
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ulong $getAccessTimestamp() const;
    // NOLINTEND
#else // @header-generator platform
    MCFOLD uint64 $getAccessTimestamp() const;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
#else // @header-generator platform

#endif // @header-generator platform
    // NOLINTEND
};

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedLockbox.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/Subject.h"
#include "mc/locale/I18n.h"
#if defined(LL_PLAT_A) // @header-generator platform
#include "mc/locale/ImmutableLocalization.h"
#else // @header-generator platform
#include "mc/platform/threading/Mutex.h"
#endif // @header-generator platform

// auto generated forward declare list
// clang-format off
class I18nObserver;
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
class ImmutableLocalization;
#endif // @header-generator platform
class Localization;
class PackAccessStrategy;
class PackManifest;
class ResourceLoadManager;
class ResourcePackManager;
namespace Json { class Value; }
// clang-format on

class I18nImpl : public ::I18n {
public:
    // I18nImpl inner types declare
    // clang-format off
    struct CurrentLanguageInfo;
    // clang-format on

    // I18nImpl inner types define
    enum class NotifyMode : uchar {
        Always        = 0,
        LocaleChanged = 1,
    };

    struct CurrentLanguageInfo {
    public:
        // member variables
        // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
        ::ll::TypedStorage<8, 16, std::shared_ptr<const ImmutableLocalization>> mCurrentLanguage;
        ::ll::TypedStorage<8, 16, std::shared_ptr<const ImmutableLocalization>> mCurrentPackMetaLanguage;
#else // @header-generator platform
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ImmutableLocalization const>> mCurrentLanguage;
        ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ImmutableLocalization const>> mCurrentPackMetaLanguage;
#endif // @header-generator platform
        // NOLINTEND
    };

    using LockedCurrentLanguageInfo =
#if defined(LL_PLAT_A) // @header-generator platform
        ::Bedrock::Threading::SharedLockbox<I18nImpl::CurrentLanguageInfo, std::shared_timed_mutex>;
#else // @header-generator platform
        ::Bedrock::Threading::SharedLockbox<::I18nImpl::CurrentLanguageInfo, ::std::shared_mutex>;
#endif // @header-generator platform

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<8, 16, std::shared_ptr<const Localization>>                 mEmptyLanguage;
    ::ll::UntypedStorage<8, 176>                                                   mCurrentLanguageInfo;
    ::ll::TypedStorage<8, 24, std::vector<std::shared_ptr<ImmutableLocalization>>> mLanguages;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>                            mLanguageCodes;
    ::ll::TypedStorage<8, 40, std::unordered_map<std::string, std::string>>        mLanguageNames;
    ::ll::UntypedStorage<8, 168>                                                   mPackKeywordLanguages;
    ::ll::TypedStorage<8, 24, std::vector<std::string> const>                      mPackReservedKeys;
    ::ll::TypedStorage<1, 1, bool>                                                 mLanguageSupportsHypenSplitting;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager*>                               mResourcePackManager;
    ::ll::UntypedStorage<1, 144>                                                   mAdditionalTranslationsBackupMutex;
    ::ll::TypedStorage<8, 24, std::vector<ImmutableLocalization>>                  mAdditionalTranslationsBackup;
    ::ll::UntypedStorage<1, 144>                                                   mLocalizationMutex;
    ::ll::UntypedStorage<8, 64>                                                    mSubject;
#else // @header-generator platform
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Localization const>> mEmptyLanguage;
    ::ll::TypedStorage<8, 40, ::Bedrock::Threading::SharedLockbox<::I18nImpl::CurrentLanguageInfo, ::std::shared_mutex>>
                                                                                         mCurrentLanguageInfo;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ImmutableLocalization>>> mLanguages;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                              mLanguageCodes;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::string>>        mLanguageNames;
    ::ll::TypedStorage<
        8,
        32,
        ::Bedrock::Threading::
            SharedLockbox<::std::vector<::std::shared_ptr<::ImmutableLocalization>>, ::std::shared_mutex>>
                                                                      mPackKeywordLanguages;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string> const>     mPackReservedKeys;
    ::ll::TypedStorage<1, 1, bool>                                    mLanguageSupportsHypenSplitting;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager*>                  mResourcePackManager;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                     mAdditionalTranslationsBackupMutex;
    ::ll::TypedStorage<8, 24, ::std::vector<::ImmutableLocalization>> mAdditionalTranslationsBackup;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                     mLocalizationMutex;
    ::ll::TypedStorage<8, 104, ::Core::Subject<::I18nObserver, ::Bedrock::Threading::Mutex>> mSubject;
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
    virtual ~I18nImpl();
#else // @header-generator platform
    virtual void clearLanguages() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void clearLanguages();
#else // @header-generator platform
    virtual ::std::vector<::std::string>
    findAvailableLanguages(::ResourcePackManager& resourcePackManager) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string> findAvailableLanguages(::ResourcePackManager&);
#else // @header-generator platform
    virtual ::std::unordered_map<::std::string, ::std::string>
    findAvailableLanguageNames(::ResourcePackManager& resourcePackManager) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unordered_map<std::string, std::string> findAvailableLanguageNames(::ResourcePackManager&);
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> loadLanguages(
        ::ResourcePackManager&                               resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::std::string const&                                 initLang
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> loadLanguages(::ResourcePackManager&, ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>, std::string const&);
#else // @header-generator platform
    virtual void loadAllLanguages(::ResourcePackManager& resourcePackManager) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadAllLanguages(::ResourcePackManager&);
#else // @header-generator platform
    virtual ::std::vector<::std::string>
    getLanguageCodesFromPack(::PackAccessStrategy const& accessStrategy) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string> getLanguageCodesFromPack(::PackAccessStrategy const&);
#else // @header-generator platform
    virtual void loadLanguageKeywordsFromPack(
        ::PackManifest const&       manifest,
        ::PackAccessStrategy const& accessStrategy
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadLanguageKeywordsFromPack(::PackManifest const&, ::PackAccessStrategy const&, std::vector<std::string> const&, std::optional<std::vector<std::string>> const&);
#else // @header-generator platform
    virtual void loadLanguageKeywordsFromPack(
        ::PackManifest const&                                manifest,
        ::PackAccessStrategy const&                          accessStrategy,
        ::std::vector<::std::string> const&                  languageCodes,
        ::std::optional<::std::vector<::std::string>> const& additionalLocKeys
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadLanguageKeywordsFromPack(::PackManifest const&, ::PackAccessStrategy const&);
#else // @header-generator platform
    virtual void appendLanguageStringsFromPack(
        ::PackManifest const&                                                            manifest,
        ::std::multimap<::std::string, ::std::pair<::std::string, ::std::string>> const& localizationMapping
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendLanguageStringsFromPack(::PackManifest const&, std::multimap<std::string, std::pair<std::string, std::string>> const&);
#else // @header-generator platform
    virtual ::std::unordered_map<::std::string, ::std::string>
    getLanguageKeywordsFromPack(::PackManifest const& manifest, ::std::string const& keyword) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unordered_map<std::string, std::string> getLanguageKeywordsFromPack(::PackManifest const&, std::string const&);
#else // @header-generator platform
    virtual void loadLangaugesByLocale(
        ::std::unordered_multimap<::std::string, ::std::pair<::std::string, ::std::string>> const& storeLocalization
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadLangaugesByLocale(std::unordered_multimap<std::string, std::pair<std::string, std::string>> const&);
#else // @header-generator platform
    virtual void appendAdditionalTranslations(
        ::std::unordered_map<::std::string, ::std::string> const& translations,
        ::std::string const&                                      keyPrefix
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendAdditionalTranslations(std::unordered_map<std::string, std::string> const&, std::string const&);
#else // @header-generator platform
    virtual void appendLanguageStrings(::PackAccessStrategy* accessStrategy) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendLanguageStrings(::PackAccessStrategy*);
#else // @header-generator platform
    virtual void addI18nObserver(::I18nObserver& observer) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addI18nObserver(::I18nObserver&);
#else // @header-generator platform
    virtual void chooseLanguage(::std::string const& code) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void chooseLanguage(std::string const&);
#else // @header-generator platform
    virtual ::std::string
    get(::std::string const&                          id,
        ::std::vector<::std::string> const&           params,
        ::std::shared_ptr<::Localization const> const locale) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string get(std::string const&, std::shared_ptr<const Localization> const);
#else // @header-generator platform
    virtual ::std::string
    get(::std::string const& langString, ::std::shared_ptr<::Localization const> const locale) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string get(std::string const&, std::vector<std::string> const&, std::shared_ptr<const Localization> const);
#else // @header-generator platform
    virtual ::std::string getPackKeywordValue(::PackManifest const& manifest, ::std::string const& key) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getPackKeywordValue(::PackManifest const&, std::string const&);
#else // @header-generator platform
    virtual ::std::string
    getPackKeywordValueForTelemetry(::PackManifest const& manifest, ::std::string const& key) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getPackKeywordValueForTelemetry(::PackManifest const&, std::string const&);
#else // @header-generator platform
    virtual bool hasPackKeyEntry(::PackManifest const& manifest, ::std::string const& key) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasPackKeyEntry(::PackManifest const&, std::string const&);
#else // @header-generator platform
    virtual ::std::vector<::std::string> const& getSupportedLanguageCodes() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string> const& getSupportedLanguageCodes();
#else // @header-generator platform
    virtual ::std::string const& getLanguageName(::std::string const& code) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getLanguageName(std::string const&);
#else // @header-generator platform
    virtual ::std::shared_ptr<::Localization const> const getLocaleFor(::std::string const& code) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<const Localization> const getLocaleFor(std::string const&);
#else // @header-generator platform
    virtual ::std::string const& getLocaleCodeFor(::std::string const& code) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getLocaleCodeFor(std::string const&);
#else // @header-generator platform
    virtual ::gsl::not_null<::std::shared_ptr<::Localization const>> getCurrentLanguage() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<std::shared_ptr<const Localization>> getCurrentLanguage();
#else // @header-generator platform
    virtual bool languageSupportsHypenSplitting() /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool languageSupportsHypenSplitting();
#else // @header-generator platform
    virtual ::std::string getLocalizedAssetFileWithFallback(
        ::std::string const& fileNamePrefix,
        ::std::string const& fileNameSuffix
    ) /*override*/;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getLocalizedAssetFileWithFallback(std::string const&, std::string const&);

    virtual bool isPackKeyword(std::string const&);
    // clang-format on
#else // @header-generator platform
    virtual bool isPackKeyword(::std::string const& key) /*override*/;
#endif // @header-generator platform
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI I18nImpl();
#else // @header-generator platform
    MCAPI I18nImpl();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _chooseLanguage(std::shared_ptr<ImmutableLocalization>, ::I18nImpl::NotifyMode);
#else // @header-generator platform
    MCAPI void _chooseLanguage(::std::shared_ptr<::ImmutableLocalization> chosen, ::I18nImpl::NotifyMode notify);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void _findAvailableLanguages(::Json::Value const&, std::vector<std::string>&);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::ImmutableLocalization> _findLocaleFor(::std::string const& code);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<ImmutableLocalization> _findLocaleFor(std::string const&);
#else // @header-generator platform
    MCAPI ::std::string _generatePackKeyPrefix(::PackManifest const& manifest);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string _generatePackKeyPrefix(::PackManifest const&);
#else // @header-generator platform
    MCAPI ::std::string& _getLocaleCodeFor(::std::string const& code);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string& _getLocaleCodeFor(std::string const&);
#else // @header-generator platform
    MCAPI ::gsl::not_null<::std::shared_ptr<::ImmutableLocalization>>
    _getPackKeywordLocale(::std::string const& langCode);
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<std::shared_ptr<ImmutableLocalization>> _getPackKeywordLocale(std::string const&);

    MCNAPI void _notifyLanguagesLoaded();
#else // @header-generator platform
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _findAvailableLanguages(::Json::Value const& root, ::std::vector<::std::string>& destination);
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#else // @header-generator platform
    MCAPI void* $ctor();
#endif // @header-generator platform
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $clearLanguages();
#else // @header-generator platform
    MCAPI void $clearLanguages();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> $findAvailableLanguages(::ResourcePackManager&);
#else // @header-generator platform
    MCAPI ::std::vector<::std::string> $findAvailableLanguages(::ResourcePackManager& resourcePackManager);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_map<std::string, std::string> $findAvailableLanguageNames(::ResourcePackManager&);
#else // @header-generator platform
    MCAPI ::std::unordered_map<::std::string, ::std::string>
    $findAvailableLanguageNames(::ResourcePackManager& resourcePackManager);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::Bedrock::Threading::Async<void> $loadLanguages(
        ::ResourcePackManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        std::string const&
#else // @header-generator platform
    MCAPI ::Bedrock::Threading::Async<void> $loadLanguages(
        ::ResourcePackManager&                               resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::std::string const&                                 initLang
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $loadAllLanguages(::ResourcePackManager&);
#else // @header-generator platform
    MCAPI void $loadAllLanguages(::ResourcePackManager& resourcePackManager);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> $getLanguageCodesFromPack(::PackAccessStrategy const&);
#else // @header-generator platform
    MCAPI ::std::vector<::std::string> $getLanguageCodesFromPack(::PackAccessStrategy const& accessStrategy);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $loadLanguageKeywordsFromPack(
        ::PackManifest const&,
        ::PackAccessStrategy const&,
        std::vector<std::string> const&,
        std::optional<std::vector<std::string>> const&
#else // @header-generator platform
    MCAPI void
    $loadLanguageKeywordsFromPack(::PackManifest const& manifest, ::PackAccessStrategy const& accessStrategy);

    MCAPI void $loadLanguageKeywordsFromPack(
        ::PackManifest const&                                manifest,
        ::PackAccessStrategy const&                          accessStrategy,
        ::std::vector<::std::string> const&                  languageCodes,
        ::std::optional<::std::vector<::std::string>> const& additionalLocKeys
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $loadLanguageKeywordsFromPack(::PackManifest const&, ::PackAccessStrategy const&);

    MCNAPI void $appendLanguageStringsFromPack(
        ::PackManifest const&,
        std::multimap<std::string, std::pair<std::string, std::string>> const&
#else // @header-generator platform
    MCAPI void $appendLanguageStringsFromPack(
        ::PackManifest const&                                                            manifest,
        ::std::multimap<::std::string, ::std::pair<::std::string, ::std::string>> const& localizationMapping
#endif // @header-generator platform
    );

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::unordered_map<std::string, std::string>
           $getLanguageKeywordsFromPack(::PackManifest const&, std::string const&);
#else // @header-generator platform
    MCAPI ::std::unordered_map<::std::string, ::std::string>
    $getLanguageKeywordsFromPack(::PackManifest const& manifest, ::std::string const& keyword);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void
    $loadLangaugesByLocale(std::unordered_multimap<std::string, std::pair<std::string, std::string>> const&);
#else // @header-generator platform
    MCAPI void $loadLangaugesByLocale(
        ::std::unordered_multimap<::std::string, ::std::pair<::std::string, ::std::string>> const& storeLocalization
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $appendAdditionalTranslations(std::unordered_map<std::string, std::string> const&, std::string const&);
#else // @header-generator platform
    MCAPI void $appendAdditionalTranslations(
        ::std::unordered_map<::std::string, ::std::string> const& translations,
        ::std::string const&                                      keyPrefix
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $appendLanguageStrings(::PackAccessStrategy*);
#else // @header-generator platform
    MCAPI void $appendLanguageStrings(::PackAccessStrategy* accessStrategy);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $addI18nObserver(::I18nObserver&);
#else // @header-generator platform
    MCAPI void $addI18nObserver(::I18nObserver& observer);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void $chooseLanguage(std::string const&);
#else // @header-generator platform
    MCAPI void $chooseLanguage(::std::string const& code);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $get(std::string const&, std::shared_ptr<const Localization> const);
#else // @header-generator platform
    MCAPI ::std::string $get(
        ::std::string const&                          id,
        ::std::vector<::std::string> const&           params,
        ::std::shared_ptr<::Localization const> const locale
    );
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string
           $get(std::string const&, std::vector<std::string> const&, std::shared_ptr<const Localization> const);
#else // @header-generator platform
    MCAPI ::std::string $get(::std::string const& langString, ::std::shared_ptr<::Localization const> const locale);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getPackKeywordValue(::PackManifest const&, std::string const&);
#else // @header-generator platform
    MCAPI ::std::string $getPackKeywordValue(::PackManifest const& manifest, ::std::string const& key);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getPackKeywordValueForTelemetry(::PackManifest const&, std::string const&);
#else // @header-generator platform
    MCAPI ::std::string $getPackKeywordValueForTelemetry(::PackManifest const& manifest, ::std::string const& key);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $hasPackKeyEntry(::PackManifest const&, std::string const&);
#else // @header-generator platform
    MCAPI bool $hasPackKeyEntry(::PackManifest const& manifest, ::std::string const& key);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::vector<std::string> const& $getSupportedLanguageCodes();
#else // @header-generator platform
    MCFOLD ::std::vector<::std::string> const& $getSupportedLanguageCodes();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getLanguageName(std::string const&);
#else // @header-generator platform
    MCAPI ::std::string const& $getLanguageName(::std::string const& code);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::shared_ptr<const Localization> const $getLocaleFor(std::string const&);
#else // @header-generator platform
    MCAPI ::std::shared_ptr<::Localization const> const $getLocaleFor(::std::string const& code);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string const& $getLocaleCodeFor(std::string const&);
#else // @header-generator platform
    MCAPI ::std::string const& $getLocaleCodeFor(::std::string const& code);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI ::gsl::not_null<std::shared_ptr<const Localization>> $getCurrentLanguage();
#else // @header-generator platform
    MCAPI ::gsl::not_null<::std::shared_ptr<::Localization const>> $getCurrentLanguage();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $languageSupportsHypenSplitting();
#else // @header-generator platform
#ifdef LL_PLAT_S
    MCAPI bool $languageSupportsHypenSplitting();
#else // LL_PLAT_C
    MCFOLD bool $languageSupportsHypenSplitting();
#endif
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI std::string $getLocalizedAssetFileWithFallback(std::string const&, std::string const&);
#else // @header-generator platform
    MCAPI ::std::string
    $getLocalizedAssetFileWithFallback(::std::string const& fileNamePrefix, ::std::string const& fileNameSuffix);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI bool $isPackKeyword(std::string const&);
    // NOLINTEND
#else // @header-generator platform
    MCAPI bool $isPackKeyword(::std::string const& key);
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

#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/SharedLockbox.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/Subject.h"
#include "mc/locale/I18n.h"
#include "mc/locale/ImmutableLocalization.h"

// auto generated forward declare list
// clang-format off
class I18nObserver;
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
        ::ll::TypedStorage<8, 16, std::shared_ptr<const ImmutableLocalization>> mCurrentLanguage;
        ::ll::TypedStorage<8, 16, std::shared_ptr<const ImmutableLocalization>> mCurrentPackMetaLanguage;
        // NOLINTEND
    };

    using LockedCurrentLanguageInfo =
        ::Bedrock::Threading::SharedLockbox<I18nImpl::CurrentLanguageInfo, std::shared_timed_mutex>;

public:
    // member variables
    // NOLINTBEGIN
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
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // clang-format off
    virtual ~I18nImpl();

    virtual void clearLanguages();

    virtual std::vector<std::string> findAvailableLanguages(::ResourcePackManager&);

    virtual std::unordered_map<std::string, std::string> findAvailableLanguageNames(::ResourcePackManager&);

    virtual ::Bedrock::Threading::Async<void> loadLanguages(::ResourcePackManager&, ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>, std::string const&);

    virtual void loadAllLanguages(::ResourcePackManager&);

    virtual std::vector<std::string> getLanguageCodesFromPack(::PackAccessStrategy const&);

    virtual void loadLanguageKeywordsFromPack(::PackManifest const&, ::PackAccessStrategy const&, std::vector<std::string> const&, std::optional<std::vector<std::string>> const&);

    virtual void loadLanguageKeywordsFromPack(::PackManifest const&, ::PackAccessStrategy const&);

    virtual void appendLanguageStringsFromPack(::PackManifest const&, std::multimap<std::string, std::pair<std::string, std::string>> const&);

    virtual std::unordered_map<std::string, std::string> getLanguageKeywordsFromPack(::PackManifest const&, std::string const&);

    virtual void loadLangaugesByLocale(std::unordered_multimap<std::string, std::pair<std::string, std::string>> const&);

    virtual void appendAdditionalTranslations(std::unordered_map<std::string, std::string> const&, std::string const&);

    virtual void appendLanguageStrings(::PackAccessStrategy*);

    virtual void addI18nObserver(::I18nObserver&);

    virtual void chooseLanguage(std::string const&);

    virtual std::string get(std::string const&, std::shared_ptr<const Localization> const);

    virtual std::string get(std::string const&, std::vector<std::string> const&, std::shared_ptr<const Localization> const);

    virtual std::string getPackKeywordValue(::PackManifest const&, std::string const&);

    virtual std::string getPackKeywordValueForTelemetry(::PackManifest const&, std::string const&);

    virtual bool hasPackKeyEntry(::PackManifest const&, std::string const&);

    virtual std::vector<std::string> const& getSupportedLanguageCodes();

    virtual std::string const& getLanguageName(std::string const&);

    virtual std::shared_ptr<const Localization> const getLocaleFor(std::string const&);

    virtual std::string const& getLocaleCodeFor(std::string const&);

    virtual ::gsl::not_null<std::shared_ptr<const Localization>> getCurrentLanguage();

    virtual bool languageSupportsHypenSplitting();

    virtual std::string getLocalizedAssetFileWithFallback(std::string const&, std::string const&);

    virtual bool isPackKeyword(std::string const&);
    // clang-format on
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI I18nImpl();

    MCNAPI void _chooseLanguage(std::shared_ptr<ImmutableLocalization>, ::I18nImpl::NotifyMode);

    MCNAPI void _findAvailableLanguages(::Json::Value const&, std::vector<std::string>&);

    MCNAPI std::shared_ptr<ImmutableLocalization> _findLocaleFor(std::string const&);

    MCNAPI std::string _generatePackKeyPrefix(::PackManifest const&);

    MCNAPI std::string& _getLocaleCodeFor(std::string const&);

    MCNAPI ::gsl::not_null<std::shared_ptr<ImmutableLocalization>> _getPackKeywordLocale(std::string const&);

    MCNAPI void _notifyLanguagesLoaded();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $clearLanguages();

    MCNAPI std::vector<std::string> $findAvailableLanguages(::ResourcePackManager&);

    MCNAPI std::unordered_map<std::string, std::string> $findAvailableLanguageNames(::ResourcePackManager&);

    MCNAPI ::Bedrock::Threading::Async<void> $loadLanguages(
        ::ResourcePackManager&,
        ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>,
        std::string const&
    );

    MCNAPI void $loadAllLanguages(::ResourcePackManager&);

    MCNAPI std::vector<std::string> $getLanguageCodesFromPack(::PackAccessStrategy const&);

    MCNAPI void $loadLanguageKeywordsFromPack(
        ::PackManifest const&,
        ::PackAccessStrategy const&,
        std::vector<std::string> const&,
        std::optional<std::vector<std::string>> const&
    );

    MCNAPI void $loadLanguageKeywordsFromPack(::PackManifest const&, ::PackAccessStrategy const&);

    MCNAPI void $appendLanguageStringsFromPack(
        ::PackManifest const&,
        std::multimap<std::string, std::pair<std::string, std::string>> const&
    );

    MCNAPI std::unordered_map<std::string, std::string>
           $getLanguageKeywordsFromPack(::PackManifest const&, std::string const&);

    MCNAPI void
    $loadLangaugesByLocale(std::unordered_multimap<std::string, std::pair<std::string, std::string>> const&);

    MCNAPI void $appendAdditionalTranslations(std::unordered_map<std::string, std::string> const&, std::string const&);

    MCNAPI void $appendLanguageStrings(::PackAccessStrategy*);

    MCNAPI void $addI18nObserver(::I18nObserver&);

    MCNAPI void $chooseLanguage(std::string const&);

    MCNAPI std::string $get(std::string const&, std::shared_ptr<const Localization> const);

    MCNAPI std::string
           $get(std::string const&, std::vector<std::string> const&, std::shared_ptr<const Localization> const);

    MCNAPI std::string $getPackKeywordValue(::PackManifest const&, std::string const&);

    MCNAPI std::string $getPackKeywordValueForTelemetry(::PackManifest const&, std::string const&);

    MCNAPI bool $hasPackKeyEntry(::PackManifest const&, std::string const&);

    MCNAPI std::vector<std::string> const& $getSupportedLanguageCodes();

    MCNAPI std::string const& $getLanguageName(std::string const&);

    MCNAPI std::shared_ptr<const Localization> const $getLocaleFor(std::string const&);

    MCNAPI std::string const& $getLocaleCodeFor(std::string const&);

    MCNAPI ::gsl::not_null<std::shared_ptr<const Localization>> $getCurrentLanguage();

    MCNAPI bool $languageSupportsHypenSplitting();

    MCNAPI std::string $getLocalizedAssetFileWithFallback(std::string const&, std::string const&);

    MCNAPI bool $isPackKeyword(std::string const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

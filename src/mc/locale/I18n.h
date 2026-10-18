#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class I18nObserver;
class Localization;
class PackAccessStrategy;
class PackManifest;
class ResourceLoadManager;
class ResourcePackManager;
// clang-format on

class I18n {
public:
    // virtual functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    // clang-format off
#else // @header-generator platform
#endif // @header-generator platform
    virtual ~I18n() = default;

    virtual void clearLanguages() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string> findAvailableLanguages(::ResourcePackManager&) = 0;
#else // @header-generator platform
    virtual ::std::vector<::std::string> findAvailableLanguages(::ResourcePackManager& resourcePackManager) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unordered_map<std::string, std::string> findAvailableLanguageNames(::ResourcePackManager&) = 0;
#else // @header-generator platform
    virtual ::std::unordered_map<::std::string, ::std::string>
    findAvailableLanguageNames(::ResourcePackManager& resourcePackManager) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> loadLanguages(::ResourcePackManager&, ::gsl::not_null<Bedrock::NonOwnerPointer<ResourceLoadManager>>, std::string const&) = 0;
#else // @header-generator platform
    virtual ::Bedrock::Threading::Async<void> loadLanguages(
        ::ResourcePackManager&                               resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::std::string const&                                 initLang
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadAllLanguages(::ResourcePackManager&) = 0;
#else // @header-generator platform
    virtual void loadAllLanguages(::ResourcePackManager& resourcePackManager) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string> getLanguageCodesFromPack(::PackAccessStrategy const&) = 0;
#else // @header-generator platform
    virtual ::std::vector<::std::string> getLanguageCodesFromPack(::PackAccessStrategy const& accessStrategy) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadLanguageKeywordsFromPack(::PackManifest const&, ::PackAccessStrategy const&, std::vector<std::string> const&, std::optional<std::vector<std::string>> const&) = 0;
#else // @header-generator platform
    virtual void
    loadLanguageKeywordsFromPack(::PackManifest const& manifest, ::PackAccessStrategy const& accessStrategy) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadLanguageKeywordsFromPack(::PackManifest const&, ::PackAccessStrategy const&) = 0;
#else // @header-generator platform
    virtual void loadLanguageKeywordsFromPack(
        ::PackManifest const&                                manifest,
        ::PackAccessStrategy const&                          accessStrategy,
        ::std::vector<::std::string> const&                  languageCodes,
        ::std::optional<::std::vector<::std::string>> const& additionalLocKeys
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendLanguageStringsFromPack(::PackManifest const&, std::multimap<std::string, std::pair<std::string, std::string>> const&) = 0;
#else // @header-generator platform
    virtual void appendLanguageStringsFromPack(
        ::PackManifest const&                                                            manifest,
        ::std::multimap<::std::string, ::std::pair<::std::string, ::std::string>> const& localizationMapping
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::unordered_map<std::string, std::string> getLanguageKeywordsFromPack(::PackManifest const&, std::string const&) = 0;
#else // @header-generator platform
    virtual ::std::unordered_map<::std::string, ::std::string>
    getLanguageKeywordsFromPack(::PackManifest const& manifest, ::std::string const& keyword) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void loadLangaugesByLocale(std::unordered_multimap<std::string, std::pair<std::string, std::string>> const&) = 0;
#else // @header-generator platform
    virtual void loadLangaugesByLocale(
        ::std::unordered_multimap<::std::string, ::std::pair<::std::string, ::std::string>> const& storeLocalization
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendAdditionalTranslations(std::unordered_map<std::string, std::string> const&, std::string const&) = 0;
#else // @header-generator platform
    virtual void appendAdditionalTranslations(
        ::std::unordered_map<::std::string, ::std::string> const& translations,
        ::std::string const&                                      keyPrefix
    ) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void appendLanguageStrings(::PackAccessStrategy*) = 0;
#else // @header-generator platform
    virtual void appendLanguageStrings(::PackAccessStrategy* accessStrategy) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void addI18nObserver(::I18nObserver&) = 0;
#else // @header-generator platform
    virtual void addI18nObserver(::I18nObserver& observer) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual void chooseLanguage(std::string const&) = 0;
#else // @header-generator platform
    virtual void chooseLanguage(::std::string const& code) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string get(std::string const&, std::shared_ptr<const Localization> const) = 0;
#else // @header-generator platform
    virtual ::std::string
    get(::std::string const&                          id,
        ::std::vector<::std::string> const&           params,
        ::std::shared_ptr<::Localization const> const locale) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string get(std::string const&, std::vector<std::string> const&, std::shared_ptr<const Localization> const) = 0;
#else // @header-generator platform
    virtual ::std::string
    get(::std::string const& langString, ::std::shared_ptr<::Localization const> const locale) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getPackKeywordValue(::PackManifest const&, std::string const&) = 0;
#else // @header-generator platform
    virtual ::std::string getPackKeywordValue(::PackManifest const& manifest, ::std::string const& key) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getPackKeywordValueForTelemetry(::PackManifest const&, std::string const&) = 0;
#else // @header-generator platform
    virtual ::std::string getPackKeywordValueForTelemetry(::PackManifest const& manifest, ::std::string const& key) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool hasPackKeyEntry(::PackManifest const&, std::string const&) = 0;
#else // @header-generator platform
    virtual bool hasPackKeyEntry(::PackManifest const& manifest, ::std::string const& key) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::vector<std::string> const& getSupportedLanguageCodes() = 0;
#else // @header-generator platform
    virtual ::std::vector<::std::string> const& getSupportedLanguageCodes() = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getLanguageName(std::string const&) = 0;
#else // @header-generator platform
    virtual ::std::string const& getLanguageName(::std::string const& code) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::shared_ptr<const Localization> const getLocaleFor(std::string const&) = 0;
#else // @header-generator platform
    virtual ::std::shared_ptr<::Localization const> const getLocaleFor(::std::string const& code) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string const& getLocaleCodeFor(std::string const&) = 0;
#else // @header-generator platform
    virtual ::std::string const& getLocaleCodeFor(::std::string const& code) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual ::gsl::not_null<std::shared_ptr<const Localization>> getCurrentLanguage() = 0;
#else // @header-generator platform
    virtual ::gsl::not_null<::std::shared_ptr<::Localization const>> getCurrentLanguage() = 0;
#endif // @header-generator platform

    virtual bool languageSupportsHypenSplitting() = 0;

#if defined(LL_PLAT_A) // @header-generator platform
    virtual std::string getLocalizedAssetFileWithFallback(std::string const&, std::string const&) = 0;
#else // @header-generator platform
    virtual ::std::string
    getLocalizedAssetFileWithFallback(::std::string const& fileNamePrefix, ::std::string const& fileNameSuffix) = 0;
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    virtual bool isPackKeyword(std::string const&) = 0;
    // clang-format on
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[8]> NeutralLangCode();
#else // @header-generator platform
    virtual bool isPackKeyword(::std::string const& key) = 0;
#endif // @header-generator platform
    // NOLINTEND
};
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform

MCAPI I18n& getI18n();
#endif // @header-generator platform

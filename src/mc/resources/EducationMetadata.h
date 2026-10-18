#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EducationMetadata {
public:
    // EducationMetadata inner types define
    enum class ContentType : uint {
        Invalid        = 0,
        WorldLesson    = 1,
        NonWorldLesson = 2,
        Count          = 3,
    };

    enum class UserType : uint {
        Unknown           = 0,
        StudentAndTeacher = 1,
        Teacher           = 2,
        Count             = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    ::ll::TypedStorage<4, 4, ::EducationMetadata::ContentType> mContentType;
    ::ll::TypedStorage<4, 4, int>                              mEstimatedTime;
    ::ll::TypedStorage<8, 24, std::string>                     mDescription;
    ::ll::TypedStorage<8, 24, std::string>                     mGoals;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>        mTasks;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>        mInstructions;
    ::ll::TypedStorage<8, 24, std::string>                     mLinkToMore;
    ::ll::TypedStorage<4, 4, int>                              mOrder;
    ::ll::TypedStorage<4, 4, ::EducationMetadata::UserType>    mRole;
#else // @header-generator platform
    ::ll::UntypedStorage<4, 4>  mUnk87db90;
    ::ll::UntypedStorage<4, 4>  mUnkdbf9d6;
    ::ll::UntypedStorage<8, 32> mUnk2497e1;
    ::ll::UntypedStorage<8, 32> mUnkf61c5a;
    ::ll::UntypedStorage<8, 24> mUnk830a04;
    ::ll::UntypedStorage<8, 24> mUnkbb60b5;
    ::ll::UntypedStorage<8, 32> mUnk67afb7;
    ::ll::UntypedStorage<4, 4>  mUnkcc6517;
    ::ll::UntypedStorage<4, 4>  mUnk2daa20;
#endif // @header-generator platform
    // NOLINTEND

public:
    // prevent constructor by default
    EducationMetadata& operator=(EducationMetadata const&);
#if defined(LL_PLAT_A) // @header-generator platform
#else // @header-generator platform
    EducationMetadata();
#endif // @header-generator platform

public:
    // member functions
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI EducationMetadata();
#else // @header-generator platform
    MCNAPI EducationMetadata(::EducationMetadata const& other);
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI EducationMetadata(::EducationMetadata const&);
#else // @header-generator platform
    MCNAPI ~EducationMetadata();
#endif // @header-generator platform
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<std::string, EducationMetadata::ContentType> const& STRING_TO_CONTENT_TYPE();
#else // @header-generator platform
    MCNAPI static ::std::unordered_map<::std::string, ::EducationMetadata::ContentType> const& STRING_TO_CONTENT_TYPE();
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI static std::unordered_map<std::string, EducationMetadata::UserType> const& STRING_TO_USER_TYPE();
#else // @header-generator platform
    MCNAPI static ::std::unordered_map<::std::string, ::EducationMetadata::UserType> const& STRING_TO_USER_TYPE();
#endif // @header-generator platform
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor();
#else // @header-generator platform
    MCNAPI void* $ctor(::EducationMetadata const& other);
    // NOLINTEND
#endif // @header-generator platform

#if defined(LL_PLAT_A) // @header-generator platform
    MCNAPI void* $ctor(::EducationMetadata const&);
#else // @header-generator platform
public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
#endif // @header-generator platform
    // NOLINTEND
};

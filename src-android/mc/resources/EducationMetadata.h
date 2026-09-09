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
    ::ll::TypedStorage<4, 4, ::EducationMetadata::ContentType> mContentType;
    ::ll::TypedStorage<4, 4, int>                              mEstimatedTime;
    ::ll::TypedStorage<8, 24, std::string>                     mDescription;
    ::ll::TypedStorage<8, 24, std::string>                     mGoals;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>        mTasks;
    ::ll::TypedStorage<8, 24, std::vector<std::string>>        mInstructions;
    ::ll::TypedStorage<8, 24, std::string>                     mLinkToMore;
    ::ll::TypedStorage<4, 4, int>                              mOrder;
    ::ll::TypedStorage<4, 4, ::EducationMetadata::UserType>    mRole;
    // NOLINTEND

public:
    // prevent constructor by default
    EducationMetadata& operator=(EducationMetadata const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EducationMetadata();

    MCNAPI EducationMetadata(::EducationMetadata const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static std::unordered_map<std::string, EducationMetadata::ContentType> const& STRING_TO_CONTENT_TYPE();

    MCNAPI static std::unordered_map<std::string, EducationMetadata::UserType> const& STRING_TO_USER_TYPE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::EducationMetadata const&);
    // NOLINTEND
};

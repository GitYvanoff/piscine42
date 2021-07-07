find -d . -type f -name "*.sh" -exec basename {} \; | sed 's/.sh$//'

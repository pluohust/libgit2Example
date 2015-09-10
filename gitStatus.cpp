#include <Windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
#include <git2.h>

int main(int argc, char** argv)
{
    //stdin
    if (argc == 3) {
        git_repository *repo = NULL;

        git_libgit2_init();
        git_repository_open(&repo, argv[1]);

        //////////////////////////////////////////////////////////////////////////
        git_status_list *status;
        git_status_options statusopt = GIT_STATUS_OPTIONS_INIT;
        git_status_list_new(&status, repo, &statusopt);

        size_t maxi = git_status_list_entrycount(status);
        //maxi > 0时才需要提交
        //printf("%d", maxi);
        //fprintf(stdin, "%d", maxi);
        FILE *file = fopen(argv[2], "w");
        fprintf(file, "%d", maxi);
        fclose(file);

        git_status_list_free(status);

        git_repository_free(repo);
        git_libgit2_shutdown();

    } else {
        fprintf(stdin, "%d", 0);
    }
	return 0;
}


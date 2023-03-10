#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "util.h"

void development();
void development2();

void browsers()
{
    int choice;
    while (1)
    {
        printf("\n");
        printf("1. Brave\n2. Chrome\n3. Microsoft Edge\n4. Firefox\n5. Tor browser\n6. Go Back\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            processInstall("brave");
            break;
        case 2:
            processInstall("googlechrome");
            break;
        case 3:
            processInstall("microsoft-edge");
            break;
        case 4:
            processInstall("firefox");
            break;
        case 5:
            processInstall("tor-browser");
            break;
        case 6:
            printf("\n");
            return;
        default:
            printf("Invalid choice");
            break;
        }
    }
}
void communications()
{
    int choice;
    while (1)
    {
        printf("\n");
        printf("1. Discord\n2. Signal\n3. Skype\n4. Slack\n5. Microsoft Teams\n6. Telegram\n7. Zoom\n8. Go Back\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            processInstall("discord");
            break;
        case 2:
            processInstall("signal");
            break;
        case 3:
            processInstall("skype");
            break;
        case 4:
            processInstall("slack");
            break;
        case 5:
            processInstall("microsoft-teams");
            break;
        case 6:
            processInstall("telegram");
            break;
        case 7:
            processInstall("zoom");
            break;
        case 8:
            printf("\n");
            return;
        default:
            printf("Invalid choice");
            break;
        }
    }
}

void development()
{
    int choice;
    while (1)
    {
        printf("\n");
        printf("1. Atom\n2. Git\n3. Github Desktop\n4. OpenJDK Java 8\n5. OpenJDK Java 16\n6. Oracle Java 18\n7. Jetbrains Toolbox\n8. Go to Page 2\n9. Go Back\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            processInstall("atom");
            break;
        case 2:
            processInstall("git");
            break;
        case 3:
            processInstall("git;github-desktop");
            break;
        case 4:
            processInstall("temurin8jre");
            break;
        case 5:
            processInstall("temurin16jre");
            break;
        case 6:
            processInstall("temurin18jre");
            break;
        case 7:
            processInstall("jetbrainstoolbox");
            break;
        case 8:
            development2();
            break;
        case 9:
            printf("\n");
            return;
        default:
            printf("Invalid choice");
            break;
        }
    }
}

void development2()
{
    int choice;
    while (1)
    {
        printf("\n");
        printf("10. NodeJs\n11. NodeJS LTS\n12. Python3\n13. Rust\n14. Sublime\n15. VS Code\n16. Notepad++\n17. Go to Page 1\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 10:
            processInstall("nodejs");
            break;
        case 11:
            processInstall("nodejs-lts");
            break;
        case 12:
            processInstall("python");
            break;
        case 13:
            processInstall("rust");
            break;
        case 14:
            processInstall("sublimetext4");
            break;
        case 15:
            processInstall("vscode,Git.Git");
            break;
        case 16:
            processInstall("notepadplusplus");
            break;
        case 17:
            return;
        default:
            printf("Invalid choice");
            break;
        }
    }
}

void multimedia()
{
    int choice;
    while (1)
    {
        printf("\n");
        printf("1. Audacity\n2. GIMP (Image Editor)\n3. OBS Studio\n4. VLC (Video Player)\n6. Go Back\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            processInstall("audacity");
            break;
        case 2:
            processInstall("gimp");
            break;
        case 3:
            processInstall("obs-studio");
            break;
        case 4:
            processInstall("vlc");
            break;
        case 5:
            printf("\n");
            return;
        default:
            printf("Invalid choice");
            break;
        }
    }
}

void proTools()
{
    int choice;
    while (1)
    {
        printf("\n");
        printf("1. Advanced IP Scanner\n2. Putty\n3. Wireshark\n4. Onedrive\n5. Powershell\n6. Power Toys\n7. Windows Terminal\n8. Go Back\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            processInstall("advanced-ip-scanner");
            break;
        case 2:
            processInstall("putty");
            break;
        case 3:
            processInstall("wireshark");
            break;
        case 4:
            processInstall("onedrive");
            break;
        case 5:
            processInstall("powershell-core");
            break;
        case 6:
            processInstall("powertoys");
            break;
        case 7:
            processInstall("microsoft-windows-terminal");
            break;
        case 8:
            printf("\n");
            return;
        default:
            printf("Invalid choice");
            break;
        }
    }
}

void utilities()
{
    int choice;
    while (1)
    {
        printf("\n");
        printf("1. 7-zip\n2. Anydesk\n3. CPU-Z\n4. GPU-Z\n5. qBitorrent\n6. Rufus Imager\n7. Team Viewer\n8. Go Back\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            processInstall("7zip");
            break;
        case 2:
            processInstall("anydesk");
            break;
        case 3:
            processInstall("cpu-z");
            break;
        case 4:
            processInstall("gpu-z");
            break;
        case 5:
            processInstall("qbittorrent");
            break;
        case 6:
            processInstall("rufus");
            break;
        case 7:
            processInstall("teamviewer9");
            break;
        case 8:
            printf("\n");
            return;
        default:
            printf("Invalid choice");
            break;
        }
    }
}
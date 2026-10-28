#include <stdio.h>
int main(void) 
{
int n, valid = 1;
int missingId = 0, duplicateId = 0;
int missingCount = 0, duplicateCount = 0, outOfOrderPairs = 0;
float ticketIds[15], registrationDigits;
printf("Enter N (5 to 15): ");
scanf("%d", &n);
if (n < 5 || n > 15) 
{
printf("Invalid N\n");
} 
else
{
printf("Enter ticket IDs:\n");
for (int i = 0; i < n; i++) 
scanf("%f", &ticketIds[i]);
if (ticketIds[i] < 1 || ticketIds[i] > n)
valid = 0;
}
if (valid == 0) 
{
printf("Invalid ticket ID\n");
} 
else
{
printf("Sequence: ");
for (int i = 0; i < n; i++)
printf("%f ", ticketIds[i]);
for (int id = 1; id <= n; id++) 
{
int appearances = 0;
for (int i = 0; i < n; i++) 
{
if (ticketIds[i] == id)
appearances++;
}
if (appearances == 0) 
{
missingId = id;
missingCount++;
} 
else if (appearances == 2) 
{
duplicateId = id;
duplicateCount++;
}
else if (appearances != 1) 
{
valid = 0;
}
}
if (valid == 0 || missingCount != 1 || duplicateCount != 1)
{
printf("\nInvalid scan log\n");
}
else
{
for (int i = 0; i < n; i++) 
{
for (int j = i + 1; j < n; j++) 
{
if (ticketIds[i] > ticketIds[j])
outOfOrderPairs++;
}
}
printf("\nMissing: %d, Duplicate: %d\n", missingId, duplicateId);
printf("Out-of-order pairs: %d\n", outOfOrderPairs);
printf("Enter last two registration digits: ");
scanf("%f", &registrationDigits);
int targetId = (int)registrationDigits % n + 1;
int occurrenceCount = 0;
printf("Target %d positions: ", targetId);
for (int i = 0; i < n; i++) 
{
if (ticketIds[i] == targetId) 
{
printf("%d ", i + 1);
occurrenceCount++;
}
}
printf("\nOccurrences: %d\n", occurrenceCount);
}
}
}
return 0;
}
